@class NSURL, FigCaptureMovieFileRecordingSettings, NSArray;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings

@property (nonatomic) int movieMode;
@property (copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings;
@property (copy, nonatomic) NSURL *movieURLForOriginalImage;
@property (copy, nonatomic) NSArray *movieLevelMetadataForOriginalImage;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURLForOriginalImage;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadataForOriginalImage;
@property (nonatomic) struct CGSize { double width; double height; } nonDestructiveCropSize;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
