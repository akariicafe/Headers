@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)ancillaryEntityCount;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;
+ (id)ancillaryModelNamespace;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;


@end
