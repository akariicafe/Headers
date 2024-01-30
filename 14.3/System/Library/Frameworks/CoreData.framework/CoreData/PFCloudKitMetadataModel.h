@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)identifyModelForStore:(id)a0 withConnection:(id)a1 hasOldMetadataTables:(BOOL *)a2;
+ (id)_newMetadataModelV3;
+ (id)newMetadataModelForFrameworkVersion:(id)a0;
+ (unsigned long long)ancillaryEntityCount;
+ (BOOL)checkAndRepairSchemaOfStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)a0;
+ (id)_newMetadataModelV7;
+ (id)_newMetadataModelV8;
+ (id)_newMetadataModelV4;
+ (id)_newMetadataModelV2;
+ (id)ancillaryModelNamespace;
+ (id)_newMetadataModelV6;
+ (id)_newMetadataModelV9;
+ (BOOL)doesMetadataModel:(id)a0 matchConnection:(id)a1 hasOldMetadataTables:(BOOL *)a2;
+ (id)_newMetadataModelV1;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)_newMetadataModelV10;
+ (id)allMetadataModels;
+ (id)_newMetadataModelV5;


@end
