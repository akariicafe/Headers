@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isInCloud;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

+ (id)resultWithRequestID:(int)a0 error:(id)a1;

- (id)videoURL;
- (id)exifOrientation;
- (id)initWithRequestID:(int)a0;
- (id)imageURL;
- (id)imageData;
- (id)fingerPrint;
- (long long)uiOrientation;
- (id)sanitizedInfoDictionary;
- (id)info;
- (id)imageProperties;
- (void)setSandboxExtensionToken:(id)a0;
- (id)uniformTypeIdentifier;
- (struct CGImage { } *)imageRef;
- (void)setError:(id)a0;
- (id)allowedInfoKeys;
- (id)error;
- (id)sandboxExtensionToken;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)_sanitizedError;
- (void)setErrorIfNone:(id)a0;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)addInfoFromDictionary:(id)a0;
- (id)adjustmentData;
- (id)baseVersionNeeded;
- (BOOL)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (void)clearError;
- (id)errorInfoKey;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (id)mediaMetadata;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;

@end
