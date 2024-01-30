@class NSString, NSURL, NSArray;

@interface AVMomentCaptureMovieRecordingSettings : NSObject <NSCopying> {
    NSString *_videoCodecType;
    NSArray *_movieMetadata;
    NSString *_spatialOverCaptureGroupIdentifier;
    NSArray *_spatialOverCaptureMovieMetadata;
}

@property (readonly, nonatomic) long long uniqueID;
@property (nonatomic) unsigned long long userInitiatedCaptureTime;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy, nonatomic) NSURL *movieFileURL;
@property (copy, nonatomic) NSArray *movieMetadata;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieFileURL;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieMetadata;

+ (id)movieRecordingSettings;
+ (id)movieRecordingSettingsFromMomentCaptureSettings:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)spatialOverCaptureGroupIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)_initFromMomentCaptureSettings:(id)a0;
- (id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)a0 exceptionReason:(id *)a1;

@end
