@class ANAnnouncement, NSArray, NSString, HMHome;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {
    BOOL _replyToSender;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *zones;
@property (readonly, nonatomic) NSArray *rooms;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id homeObject;
@property (retain, nonatomic) NSArray *zoneObjects;
@property (retain, nonatomic) NSArray *roomObjects;
@property (retain, nonatomic) NSString *announcementIdentifier;
@property (retain, nonatomic) ANAnnouncement *announcement;

+ (id)destinationWithHomeName:(id)a0 zoneNames:(id)a1 roomNames:(id)a2;
+ (id)destinationWithHomeIdentifier:(id)a0 zoneIdentifiers:(id)a1 roomIdentifiers:(id)a2;
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)a0;
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)a0;
+ (id)destinationWithHome:(id)a0 zones:(id)a1 rooms:(id)a2;
+ (id)destinationWithHomeName:(id)a0;
+ (id)destinationWithHomeIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setReplyToSender:(BOOL)a0;
- (BOOL)replyToSender;

@end
