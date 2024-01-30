@class NSString, NSSet, AVDispatchOnce;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
    AVDispatchOnce *_supportsSampleReferencesOnce;
    BOOL _supportsSampleReferences;
}

@property (readonly, nonatomic) NSString *defaultFileExtension;
@property (readonly, nonatomic) NSSet *supportedMediaTypes;
@property (readonly, nonatomic) BOOL supportsSampleReferences;
@property (readonly, nonatomic) NSString *UTI;
@property (readonly, nonatomic) NSString *figFormatReaderFileFormat;
@property (readonly, nonatomic) unsigned int audioFileTypeID;

+ (void)initialize;
+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)a0;
+ (id)allFileTypeIdentifiers;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)a0 exceptionReason:(id *)a1;
+ (struct __CFString { } *)figFileTypeProfileFromAVFileTypeProfile:(id)a0;

- (BOOL)supportsOutputSettings:(id)a0 reason:(id *)a1;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription { } *)a0;
- (id)description;
- (id)initWithFileTypeIdentifier:(id)a0 exceptionReason:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
