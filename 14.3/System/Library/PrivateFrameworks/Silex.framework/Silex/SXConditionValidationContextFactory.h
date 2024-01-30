@class NSString;

@interface SXConditionValidationContextFactory : NSObject <SXConditionValidationContextFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createContextWithLayoutOptions:(id)a0;

@end
