@class NSArray, NSError;

@interface HDClinicalIngestionMutableRetryPolicy : HDClinicalIngestionRetryPolicy

@property (copy, nonatomic) NSArray *accountIdentifiers;
@property (copy, nonatomic) NSError *underlyingError;
@property (nonatomic) BOOL requiresNetwork;
@property (nonatomic) long long retryInterval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
