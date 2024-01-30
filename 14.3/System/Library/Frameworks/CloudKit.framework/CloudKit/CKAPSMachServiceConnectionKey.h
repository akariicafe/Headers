@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environmentName;
@property (readonly, copy, nonatomic) NSString *namedDelegatePort;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
