@class NSString;

@interface VUIAction : NSObject <VUIAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithDictionary:(id)a0 viewElement:(id)a1 appContext:(id)a2;

- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
