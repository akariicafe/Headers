@interface LPMIMETypeRegistry : NSObject

+ (id)MIMETypeForUTI:(id)a0;
+ (id)UTIForMIMEType:(id)a0;
+ (id)UTIForFileExtension:(id)a0;
+ (id)fileExtensionForMIMEType:(id)a0;
+ (id)fileExtensionForUTI:(id)a0;
+ (BOOL)isARAssetType:(id)a0;
+ (BOOL)isAudioType:(id)a0;
+ (BOOL)isHLSType:(id)a0;
+ (BOOL)isImageType:(id)a0;
+ (BOOL)isJSONType:(id)a0;
+ (BOOL)isLosslessImageType:(id)a0;
+ (BOOL)isMediaType:(id)a0;
+ (BOOL)isNonAnimatedMultiframeImageType:(id)a0;
+ (BOOL)isVideoType:(id)a0;
+ (BOOL)isWebPageType:(id)a0;

@end
