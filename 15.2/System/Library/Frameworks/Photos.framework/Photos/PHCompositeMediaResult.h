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

- (id)imageURL;
- (id)initWithRequestID:(int)a0;
- (id)imageData;
- (long long)uiOrientation;
- (id)uniformTypeIdentifier;
- (struct CGImage { } *)imageRef;
- (BOOL)containsValidData;
- (id)imageProperties;
- (id)allowedInfoKeys;
- (id)info;
- (id)sanitizedInfoDictionary;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)errorInfoKey;
- (id)cancelledInfoKey;
- (id)inCloudInfoKey;
- (id)_sanitizedError;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (id)adjustmentData;
- (BOOL)canHandleAdjustmentData;
- (id)baseVersionNeeded;
- (id)mediaMetadata;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)addInfoFromDictionary:(id)a0;
- (void)clearError;
- (void)setErrorIfNone:(id)a0;
- (void)setSandboxExtensionToken:(id)a0;
- (id)sandboxExtensionToken;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;
- (id)exifOrientation;
- (id)videoURL;
- (id)error;

@end
