@class NSString, NSMutableDictionary, NSUUID, NSDate;

@interface RTPDiscoverySingleContactRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *contactID;
@property (readonly, nonatomic) NSDate *firstObservation;
@property (readonly, nonatomic) NSDate *latestAdvertisementDate;
@property (readonly, nonatomic) NSMutableDictionary *RSSIDistribution;
@property (readonly, nonatomic) unsigned long long numAdvReceived;
@property (copy, nonatomic) NSUUID *eventUUID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContactID:(id)a0 withAdvertisement:(id)a1;
- (void)mergeWithAnotherSingleContactRecord:(id)a0;
- (void)updateRSSIDistribution:(long long)a0;
- (void)updateSingleContactRecordOnAdvReceived:(id)a0;

@end
