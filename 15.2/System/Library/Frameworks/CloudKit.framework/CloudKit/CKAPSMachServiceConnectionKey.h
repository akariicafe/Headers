@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environmentName;
@property (readonly, copy, nonatomic) NSString *namedDelegatePort;

- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
