@class NSString;

@interface TPSAnalyticsEventSearchPerformed : TPSAnalyticsEvent

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSString *invocationMethod;
@property (copy, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *collectionID;
@property (nonatomic) double relevance;
@property (nonatomic) long long resultOrder;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithSearchID:(id)a0 searchTerm:(id)a1 invocationMethod:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void).cxx_destruct;
- (id)_initWithSearchID:(id)a0 searchTerm:(id)a1 invocationMethod:(id)a2;

@end
