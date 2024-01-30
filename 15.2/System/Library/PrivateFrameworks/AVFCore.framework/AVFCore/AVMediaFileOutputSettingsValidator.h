@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType *_fileType;
}

@property (readonly, nonatomic) AVMediaFileType *fileType;

+ (void)initialize;
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)a0;

- (id)initWithFileType:(id)a0;
- (BOOL)validateVideoOutputSettings:(id)a0 reason:(id *)a1;
- (id)init;
- (void)dealloc;
- (BOOL)validateAudioOutputSettings:(id)a0 reason:(id *)a1;

@end
