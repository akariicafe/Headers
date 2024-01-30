@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject

@property (retain, nonatomic) NSString *slot;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id configurationObject;
@property (retain, nonatomic) SBSLockScreenContentAction *action;
@property (copy, nonatomic, getter=_errorHandler, setter=_setErrorHandler:) id /* block */ errorHandler;

+ (id)acquireContentProviderAssertionForType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3 errorHandler:(id /* block */)a4;
+ (BOOL)_isRestrictedDevice;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 errorHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3 errorHandler:(id /* block */)a4;
- (void)dealloc;
- (void)_acquireAssertionWithType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3;
- (unsigned long long)type;
- (BOOL)_supportsReacquisition;
- (void)invalidate;

@end
