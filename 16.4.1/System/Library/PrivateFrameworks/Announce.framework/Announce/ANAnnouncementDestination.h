@class NSArray, NSString, ANAnnouncement;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {
    BOOL _replyToSender;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id homeObject;
@property (retain, nonatomic) NSArray *zoneObjects;
@property (retain, nonatomic) NSArray *roomObjects;
@property (retain, nonatomic) NSString *announcementIdentifier;
@property (retain, nonatomic) ANAnnouncement *announcement;

+ (id)destinationWithHomeIdentifier:(id)a0;
+ (id)destinationWithHomeName:(id)a0 zoneNames:(id)a1 roomNames:(id)a2;
+ (id)destinationWithHomeIdentifier:(id)a0 zoneIdentifiers:(id)a1 roomIdentifiers:(id)a2;
+ (id)destinationWithHomeName:(id)a0;
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)a0;
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)replyToSender;
- (void)setReplyToSender:(BOOL)a0;

@end
