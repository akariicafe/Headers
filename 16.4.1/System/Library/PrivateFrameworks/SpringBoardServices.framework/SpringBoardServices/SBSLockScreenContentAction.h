@class NSString;

@interface SBSLockScreenContentAction : BSAction

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *slot;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long secureAppType;
@property (retain, nonatomic) id configurationObject;
@property (readonly, nonatomic) BOOL automaticallyInvalidatesOnSecureAppUserDismissal;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3 handler:(id /* block */)a4;

@end
