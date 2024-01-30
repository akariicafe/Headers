@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *shareMethod;

+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
