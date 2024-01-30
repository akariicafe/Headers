@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
+ (unsigned long long)ancillaryEntityCount;
+ (id)ancillaryModelNamespace;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;


@end
