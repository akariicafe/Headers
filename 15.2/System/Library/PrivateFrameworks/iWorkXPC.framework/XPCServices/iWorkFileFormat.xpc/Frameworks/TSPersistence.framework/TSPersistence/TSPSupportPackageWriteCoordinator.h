@class TSPPackageWriteCoordinator;

@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
}

- (void).cxx_destruct;
- (id)objectForIdentifier:(long long)a0;
- (void)didReferenceData:(id)a0;
- (BOOL)shouldEnqueueComponent:(id)a0;
- (BOOL)isObjectInExternalPackage:(id)a0 claimingComponent:(id *)a1 componentReadVersion:(unsigned long long *)a2;
- (BOOL)isComponentExternalWithIdentifier:(long long)a0 wasCopied:(BOOL *)a1 componentReadVersion:(unsigned long long *)a2;
- (BOOL)isObjectWrittenInExternalPackageWithIdentifier:(long long)a0;
- (BOOL)componentWriter:(id)a0 externalPackageDidWriteObject:(id)a1 claimingComponent:(id *)a2 componentReadVersion:(unsigned long long *)a3;
- (long long)componentIdentifierForObjectIdentifier:(long long)a0 objectOrNil:(id)a1 objectUUIDOrNil:(id)a2 outComponentIsVersioned:(BOOL *)a3;
- (BOOL)wasComponentCopied:(long long)a0;
- (id)initWithContext:(id)a0 archiverClass:(Class)a1 archiverFlags:(char)a2 documentRevision:(id)a3 saveToken:(unsigned long long)a4 packageIdentifier:(unsigned char)a5 fileFormatVersion:(unsigned long long)a6 preferredPackageType:(long long)a7 metadataObject:(id)a8 dataAttributesSnapshot:(id)a9;
- (id)initWithContext:(id)a0 archiverClass:(Class)a1 archiverFlags:(char)a2 documentRevision:(id)a3 saveToken:(unsigned long long)a4 fileFormatVersion:(unsigned long long)a5 metadataObject:(id)a6 dataAttributesSnapshot:(id)a7 packageWriteCoordinator:(id)a8;

@end
