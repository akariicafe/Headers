@class NSString, NSURL, NSArray, FigCaptureStillImageSettings, NSDictionary, BWStillImageCaptureSettings, NSObject, NSMutableArray;
@protocol OS_os_transaction;

@interface BWDeferredContainer : NSObject {
    long long _creationTimeNS;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSURL *_baseFolderURL;
    NSString *_applicationID;
    NSMutableArray *_intermediates;
    NSMutableArray *_photoDescriptors;
}

@property (readonly, nonatomic) unsigned int processingType;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (readonly, nonatomic) unsigned long long captureRequestIdentifierBytesLow;
@property (readonly, nonatomic) unsigned long long captureRequestIdentifierBytesHigh;
@property (readonly, nonatomic) long long manifestVersion;
@property (readonly, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) NSArray *bufferAttributes;
@property (readonly, nonatomic) NSArray *intermediates;

+ (void)initialize;
+ (id)archiveObject:(id)a0 error:(id *)a1;
+ (id)unarchiveObject:(id)a0 classes:(id)a1 error:(id *)a2;
+ (int)validateManifestURLSize:(id)a0;
+ (id)buildArchiveClasses:(id)a0;
+ (id)manifestDictionaryForCaptureRequestIdentifier:(id)a0 photoDescriptors:(id)a1;
+ (BOOL)archiveObjectWithURL:(id)a0 object:(id)a1 error:(id *)a2;
+ (id)unarchiveObjectWithURL:(id)a0 classes:(id)a1 error:(id *)a2;
+ (id)manifestDictionaryForURL:(id)a0 err:(int *)a1;

- (unsigned long long)_getUUIDBytes:(id)a0 high:(BOOL)a1;
- (id)_containerManifestURL;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 queuePriority:(unsigned int)a3 err:(int *)a4;
- (id)_intermediateForTag:(id)a0;
- (int)_writeManifest;
- (id)_containerSessionDataURL;
- (id)_stillImageCaptureSettingsURL;
- (id)_stillImageSettingsURL;
- (id)_intermediateFolderURL;
- (id)_intermediateArrayURLForTag:(id)a0;
- (id)_intermediateDictionaryURLForTag:(id)a0;
- (id)_intermediateMetadataURLForTag:(id)a0;
- (id)_intermediateBufferURLForTag:(id)a0 compressionProfile:(int)a1;
- (id)init;
- (BOOL)valid:(int *)a0;
- (void)dealloc;
- (int)_validate;
- (int)flush;
- (BOOL)hasTag:(id)a0;

@end
