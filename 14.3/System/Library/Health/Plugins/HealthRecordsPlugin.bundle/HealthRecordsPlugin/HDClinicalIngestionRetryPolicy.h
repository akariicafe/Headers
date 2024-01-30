@class NSArray, NSError;

@interface HDClinicalIngestionRetryPolicy : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *accountIdentifiers;
@property (readonly, copy, nonatomic) NSError *underlyingError;
@property (readonly, nonatomic) long long retryInterval;
@property (readonly, nonatomic) BOOL requiresNetwork;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRetryInterval:(long long)a0 accountIdentifiers:(id)a1;

@end
