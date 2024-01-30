@class NSString, MNPlannedDestination;

@interface MNTimeballSubscription : NSObject <MNJSONOutput, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) MNPlannedDestination *destination;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) unsigned long long refreshPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subscriptionForDestination:(id)a0 options:(long long)a1 refreshPolicy:(unsigned long long)a2;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
