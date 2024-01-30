@class NSString;

@interface NMSKeepLocalRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL requiresValidation;
@property (copy, nonatomic) NSString *cellularBundleIdentifier;
@property (nonatomic) unsigned long long powerPolicy;
@property (nonatomic) unsigned long long cellularPolicy;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
