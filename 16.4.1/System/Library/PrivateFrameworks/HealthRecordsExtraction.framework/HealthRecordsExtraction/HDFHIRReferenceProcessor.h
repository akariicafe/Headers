@interface HDFHIRReferenceProcessor : NSObject

+ (id)identifierForResource:(id)a0 containedInResource:(id)a1 error:(id *)a2;
+ (id)identifierFromAbsoluteReferenceURL:(id)a0;
+ (id)newResourceFromResource:(id)a0 containingOnlyResources:(id)a1 error:(id *)a2;
+ (id)newResourceFromResource:(id)a0 containingResource:(id)a1 reference:(id)a2 error:(id *)a3;
+ (BOOL)reference:(id)a0 matchesIdentifier:(id)a1;
+ (BOOL)referenceIsAbsolute:(id)a0;
+ (BOOL)referenceRequiresContaining:(id)a0;
+ (id)referencesAtKeyPath:(id)a0 resourceDictionary:(id)a1 error:(id *)a2;
+ (id)resourceContainedInResource:(id)a0 reference:(id)a1 error:(id *)a2;
+ (id)resourceReferenceInReference:(id)a0 error:(id *)a1;
+ (id)resourcesContainedInResource:(id)a0 error:(id *)a1;

@end
