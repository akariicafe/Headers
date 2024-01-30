@class NSArray, UTType;

@interface PFUniformTypeUtilities : NSObject

@property (class, readonly) UTType *photosLibraryType;
@property (class, readonly) UTType *apertureLibraryType;
@property (class, readonly) UTType *supplementalResourceXMPType;
@property (class, readonly) UTType *supplementalResourceAAEType;
@property (class, readonly) UTType *livePhotoBundleType;
@property (class, readonly) UTType *livePhotoBundlePrivateType;
@property (class, readonly) UTType *heicSequenceType;
@property (class, readonly) UTType *adobePhotoshopType;
@property (class, readonly) UTType *adobeIllustratorType;
@property (class, readonly) UTType *pictType;
@property (class, readonly) UTType *quicktimeImageType;
@property (class, readonly) UTType *icoType;
@property (class, readonly) UTType *macPaintType;
@property (class, readonly) UTType *jpeg2000Type;
@property (class, readonly) UTType *sonyARWRAWImageType;
@property (class, readonly) UTType *canonCR2RAWImageType;
@property (class, readonly) UTType *canonCRWRAWImageType;
@property (class, readonly) UTType *canonTIFFRAWImageType;
@property (class, readonly) UTType *olympusRAWImageType;
@property (class, readonly) UTType *panasonicRW2RAWImageType;
@property (class, readonly) UTType *panasonicRAWImageType;
@property (class, readonly) UTType *pentaxRAWImageType;
@property (class, readonly) UTType *nikonRAWImageType;
@property (class, readonly) UTType *samsungRAWImageType;
@property (class, readonly) UTType *fujiRAWImageType;
@property (class, readonly) UTType *leafamericaRAWImageType;
@property (class, readonly) UTType *hasselblad3FRRAWImageType;
@property (class, readonly) UTType *hasselbladFFFRAWImageType;
@property (class, readonly) NSArray *typesSupportedForImport;
@property (class, readonly) NSArray *supportedImageTypes;
@property (class, readonly) NSArray *supportedMovieTypes;
@property (class, readonly) NSArray *supportedAudioTypes;
@property (class, readonly) NSArray *imageTypesUnsupportedForImport;

+ (id)typeForHFSType:(unsigned int)a0;
+ (id)typeForURL:(id)a0 error:(id *)a1;
+ (id)typeWithIdentifier:(id)a0;
+ (id)typeForFilenameExtensionOrLastPathComponent:(id)a0;
+ (BOOL)url:(id)a0 conformsToType:(id)a1;
+ (BOOL)filenameExtension:(id)a0 conformsToOneOfTypes:(id)a1;
+ (id)preferredOrFallbackFilenameExtensionForType:(id)a0;
+ (id)typeWithFilenameExtension:(id)a0;
+ (id)resourceModelTypeForFilenameExtension:(id)a0;
+ (id)typeForHFSType:(unsigned int)a0 conformingToType:(id)a1;
+ (id)typeWithFilenameExtension:(id)a0 conformingToType:(id)a1;
+ (BOOL)type:(id)a0 conformsToOneOfTypes:(id)a1;
+ (BOOL)url:(id)a0 conformsToOneOfTypes:(id)a1;

@end
