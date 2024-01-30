@class PFCloudKitMetadataCache, NSString, NSMutableDictionary, NSCloudKitMirroringDelegateOptions, CKRecordZone, NSObject, NSMutableArray;
@protocol PFCloudKitSerializerDelegate;

@interface PFCloudKitSerializer : NSObject {
    NSMutableDictionary *_manyToManyRecordNameToRecord;
    NSString *_recordNamePrefix;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSObject<PFCloudKitSerializerDelegate> *_delegate;
    NSMutableArray *_writtenAssetURLs;
    PFCloudKitMetadataCache *_metadataCache;
    CKRecordZone *_recordZone;
}

+ (void)initialize;
+ (id)defaultRecordZoneIDForDatabaseScope:(long long)a0;
+ (void)_invalidateStaticCaches;

- (void).cxx_destruct;
- (id)initWithMirroringOptions:(id)a0 metadataCache:(id)a1 recordNamePrefix:(id)a2;
- (void)dealloc;

@end
