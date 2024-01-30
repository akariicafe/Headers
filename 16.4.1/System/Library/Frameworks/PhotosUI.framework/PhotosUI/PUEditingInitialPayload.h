@class NSURL, NSString, NSData, CLLocation, PHAdjustmentData, NSDate;

@interface PUEditingInitialPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long playbackStyle;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (nonatomic) long long adjustmentBaseVersion;
@property (copy, nonatomic) NSData *placeholderImageData;
@property (copy, nonatomic) NSData *displaySizeImageData;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *videoPathSandboxExtensionToken;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoStillDisplayTime;
@property (retain, nonatomic) NSURL *fullSizeImageURL;
@property (copy, nonatomic) NSString *fullSizeImageURLSandboxExtensionToken;
@property (nonatomic) int fullSizeImageExifOrientation;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
