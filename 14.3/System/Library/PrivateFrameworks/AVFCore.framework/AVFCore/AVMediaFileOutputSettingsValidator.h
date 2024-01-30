@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType *_fileType;
}

@property (readonly, nonatomic) AVMediaFileType *fileType;

+ (void)initialize;
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)a0;

- (id)init;
- (BOOL)validateAudioOutputSettings:(id)a0 reason:(id *)a1;
- (void)dealloc;
- (BOOL)validateVideoOutputSettings:(id)a0 reason:(id *)a1;
- (id)initWithFileType:(id)a0;

@end
