@class NSString, NSURL, CLLocation, NSDate;

@interface CAMTimelapseState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *timelapseUUID;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) long long captureDevice;
@property (nonatomic) int captureOrientation;
@property (nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) CLLocation *startLocation;
@property (retain, nonatomic) NSDate *lastFrameResponseTime;
@property (retain, nonatomic) NSDate *stopTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic) BOOL allFramesWritten;
@property (readonly, nonatomic) double captureTimeInterval;
@property (readonly, nonatomic) long long frameIndexStride;
@property (readonly, nonatomic) long long nextFrameIndex;
@property (nonatomic) float focusLensPosition;
@property (readonly, nonatomic) long long connectionMode;
@property (nonatomic) struct CGSize { double width; double height; } nominalIntermediateFrameSize;
@property (nonatomic) BOOL preferHEVC;
@property (retain, nonatomic) NSURL *localPrivateMetadataFileURL;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)fullDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToState:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_commonCAMTimelapseStateInitWithCoder:(id)a0;
- (BOOL)addStopReasons:(long long)a0 stopTime:(id)a1;
- (BOOL)canContinueCapture;
- (id)filePathForNextFrameIndex;
- (void)forceCompleted;
- (BOOL)incrementFrameIndex;
- (BOOL)isReadyForWritingMovie;
- (BOOL)mergeSecondaryState:(id)a0;
- (BOOL)writeToFile:(id)a0 createDirectoryIfNeeded:(BOOL)a1;

@end
