@class NSString;

@interface POXSSimpleTypeDefinition : POXSDefinition <POXSDefinitionProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (id)stringFromValue:(id)a0;
- (id)valueFromString:(id)a0;

@end
