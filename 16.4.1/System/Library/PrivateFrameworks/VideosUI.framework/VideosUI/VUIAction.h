@class NSString;

@interface VUIAction : NSObject <VUIAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithDictionary:(id)a0 appContext:(id)a1;

- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (void)suiPerformWithTargetResponder:(id)a0 completeTransitionHandler:(id /* block */)a1;

@end
