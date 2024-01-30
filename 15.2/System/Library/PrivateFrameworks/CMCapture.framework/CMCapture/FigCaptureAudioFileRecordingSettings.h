@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSArray *metadata;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
