@interface NFCTagCommandConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long maximumRetries;
@property (nonatomic) double retryInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
