@class NSSet;

@interface INCExtensionPlugInBundle : NSObject

@property (readonly, nonatomic) Class principalClass;
@property (readonly, copy, nonatomic) NSSet *intentsSupported;
@property (readonly, copy, nonatomic) NSSet *intentsRestrictedWhileLocked;

- (void).cxx_destruct;
- (id)initWithPrincipalClass:(Class)a0 intentsSupported:(id)a1 intentsRestrictedWhileLocked:(id)a2;

@end
