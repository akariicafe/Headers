@class NSArray, NSString;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {
    BOOL _replyToSender;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id home;
@property (retain, nonatomic) NSArray *zones;
@property (retain, nonatomic) NSArray *rooms;
@property (retain, nonatomic) NSString *announcementIdentifier;

+ (id)destinationWithHomeName:(id)a0 zoneNames:(id)a1 roomNames:(id)a2;
+ (id)destinationWithHomeIdentifier:(id)a0 zoneIdentifiers:(id)a1 roomIdentifiers:(id)a2;
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)a0;
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)a0;
+ (id)destinationWithHome:(id)a0 zones:(id)a1 rooms:(id)a2;
+ (id)destinationWithHomeName:(id)a0;
+ (id)destinationWithHomeIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)replyToSender;
- (void)setReplyToSender:(BOOL)a0;

@end
