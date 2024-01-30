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

- (id)imageData;
- (id)initWithRequestID:(int)a0;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (struct CGImage { } *)imageRef;
- (void)setSandboxExtensionToken:(id)a0;
- (id)sandboxExtensionToken;
- (id)allowedInfoKeys;
- (id)uniformTypeIdentifier;
- (id)error;
- (id)info;
- (id)errorInfoKey;
- (id)cancelledInfoKey;
- (id)inCloudInfoKey;
- (id)_sanitizedError;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (id)adjustmentData;
- (BOOL)canHandleAdjustmentData;
- (id)baseVersionNeeded;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)mediaMetadata;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)addInfoFromDictionary:(id)a0;
- (void)clearError;
- (void)setErrorIfNone:(id)a0;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;
- (id)exifOrientation;
- (id)imageURL;
- (void)setError:(id)a0;
- (BOOL)containsValidData;
- (id)imageProperties;
- (id)videoURL;
- (long long)uiOrientation;

@end
