@class NSSet, NSDictionary;

@interface WFSandboxExtensionManager : NSObject

@property (class, readonly, copy, nonatomic) NSSet *allAvailableExtensionResourceClassNames;

@property (readonly, copy, nonatomic) NSDictionary *extensionClassesPerResource;
@property (readonly, copy, nonatomic) NSSet *extensionResourcesClassNames;

+ (BOOL)hasExtensionForResourceClassName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExtensionClassesPerResource:(id)a0;
- (id)requestSandboxExtensionForResources:(id)a0 destinationProcessAuditToken:(struct { unsigned int x0[8]; })a1 unauthorizedResources:(id *)a2;

@end
