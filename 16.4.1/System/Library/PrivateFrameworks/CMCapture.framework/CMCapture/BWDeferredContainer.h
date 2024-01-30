@class NSString, NSArray, NSURL, FigCaptureStillImageSettings, NSDictionary, BWStillImageCaptureSettings, NSMutableArray, NSObject, BWDeferredPipelineParameters;
@protocol OS_os_transaction;

@interface BWDeferredContainer : NSObject {
    long long _creationTimeNS;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSURL *_baseFolderURL;
    NSString *_applicationID;
    NSMutableArray *_intermediates;
}

@property (readonly, nonatomic) NSMutableArray *photoDescriptors;
@property (readonly, nonatomic) unsigned int processingType;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (readonly, nonatomic) unsigned long long captureRequestIdentifierBytesLow;
@property (readonly, nonatomic) unsigned long long captureRequestIdentifierBytesHigh;
@property (readonly, nonatomic) long long manifestVersion;
@property (readonly, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) BWDeferredPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) NSArray *bufferAttributes;
@property (readonly, nonatomic) NSArray *intermediates;
@property (readonly, nonatomic) NSString *prettyDescription;

+ (void)initialize;
+ (id)manifestDictionaryForCaptureRequestIdentifier:(id)a0 photoDescriptors:(id)a1;
+ (id)archiveObject:(id)a0 error:(id *)a1;
+ (BOOL)archiveObjectWithURL:(id)a0 object:(id)a1 error:(id *)a2;
+ (id)buildArchiveClasses:(id)a0;
+ (id)manifestDictionaryForURL:(id)a0 err:(int *)a1;
+ (id)unarchiveObject:(id)a0 classes:(id)a1 error:(id *)a2;
+ (id)unarchiveObjectWithURL:(id)a0 classes:(id)a1 error:(id *)a2;
+ (int)validateManifestURLSize:(id)a0;

- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)hasTag:(id)a0;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 queuePriority:(unsigned int)a3 err:(int *)a4;
- (BOOL)valid:(int *)a0;

@end
