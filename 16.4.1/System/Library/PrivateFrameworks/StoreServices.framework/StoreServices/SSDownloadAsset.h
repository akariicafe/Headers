@class NSString, SSURLRequestProperties, NSArray, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
    long long _assetType;
    SSURLRequestProperties *_localProperties;
}

@property (readonly) long long fileSize;
@property (readonly) NSString *downloadFileName;
@property (readonly) NSString *downloadPath;
@property (readonly) NSString *finalizedPath;
@property (readonly, getter=isExternal) BOOL external;
@property (readonly) SSURLRequestProperties *URLRequestProperties;
@property (readonly) SSURLRequestProperties *_localProperties;
@property (readonly, retain) NSURLRequest *URLRequest;
@property (readonly) NSArray *sinfs;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setValuesMessage;
+ (id)assetWithURL:(id)a0 type:(long long)a1;

- (long long)bytesUploaded;
- (long long)assetType;
- (id)initWithURLRequestProperties:(id)a0;
- (id)initWithURLRequest:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)bytesDownloaded;
- (id)_copyURLRequestProperties;
- (long long)_legacyAssetType;
- (void)_resetLocalIVars;
- (long long)bytesUploadTotal;
- (id)initWithURLRequest:(id)a0 type:(long long)a1;

@end
