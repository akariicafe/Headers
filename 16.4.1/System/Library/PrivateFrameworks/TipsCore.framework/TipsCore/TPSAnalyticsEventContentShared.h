@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *shareMethod;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;

@end
