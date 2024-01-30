@interface HDFHIRReferenceProcessor : NSObject

+ (id)resourceReferenceInReference:(id)a0 error:(id *)a1;
+ (id)resourceContainedInResource:(id)a0 reference:(id)a1 error:(id *)a2;
+ (BOOL)referenceRequiresContaining:(id)a0;
+ (id)identifierForResource:(id)a0 containedInResource:(id)a1 error:(id *)a2;
+ (BOOL)referenceIsAbsolute:(id)a0;
+ (id)identifierFromAbsoluteReferenceURL:(id)a0;
+ (id)resourcesContainedInResource:(id)a0 error:(id *)a1;
+ (id)referencesAtKeyPath:(id)a0 resourceDictionary:(id)a1 error:(id *)a2;
+ (BOOL)reference:(id)a0 matchesIdentifier:(id)a1;
+ (id)newResourceFromResource:(id)a0 containingOnlyResources:(id)a1 error:(id *)a2;
+ (id)newResourceFromResource:(id)a0 containingResource:(id)a1 reference:(id)a2 error:(id *)a3;

@end
