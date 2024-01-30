@class NSString, NSDictionary, NSURL, NSDate;

@interface ASAsset : NSObject {
    NSDictionary *_attributes;
    NSString *_clientName;
    NSString *_identifier;
    struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __MobileAssetQuery *x3; struct __MobileAssetQuery *x4; unsigned char x5; } *_cfAsset;
}

@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSDictionary *fullAttributes;
@property (retain, nonatomic) NSDictionary *downloadOptions;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSURL *localURL;
@property (nonatomic) long long garbageCollectionBehavior;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL userInitiatedDownload;

+ (BOOL)nonUserInitiatedDownloadsAllowed;

- (void)cancelDownload:(id /* block */)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)assetServerUrl;
- (id)_getLocalAttribute:(id)a0;
- (long long)assetStateForStateString:(id)a0;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __MobileAssetQuery *x3; struct __MobileAssetQuery *x4; unsigned char x5; } *)mobileAsset;
- (BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)a0 requiredBytes:(long long *)a1 error:(id *)a2;
- (void)pauseDownload:(id /* block */)a0;
- (void)_downloadWithOptions:(id)a0 shouldFireCallback:(BOOL)a1;
- (BOOL)pauseDownloadAndReturnError:(id *)a0;
- (BOOL)resumeDownloadAndReturnError:(id *)a0;
- (BOOL)cancelDownloadAndReturnError:(id *)a0;
- (BOOL)purgeAndReturnError:(id *)a0;
- (id)systemAppServerUrl;
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)a0 error:(id *)a1;
- (void)adjustDownloadOptions:(id)a0 completion:(id /* block */)a1;
- (void)beginDownloadWithOptions:(id)a0;
- (void)resumeDownload:(id /* block */)a0;
- (id)initWithAssetType:(id)a0 attributes:(id)a1;
- (BOOL)isPresentOnDisk;
- (BOOL)isEqual:(id)a0;
- (void)purge:(id /* block */)a0;
- (id)identifier;

@end
