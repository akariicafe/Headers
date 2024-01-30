@class NSError, NSString, NSObject, NSURL, CLLocation, NSDate, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFPhotoSharingOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_externalIsolation;
    NSError *_operationError;
    BOOL _operationComplete;
    BOOL _operationSuccess;
}

@property (copy, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) BOOL shouldStripMetadata;
@property (nonatomic) BOOL shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) BOOL shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) BOOL shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (nonatomic) BOOL shouldConvertToSRGB;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL;
@property (readonly, nonatomic) NSError *operationError;

+ (BOOL)outputSupportedForTypeIdentifier:(id)a0;
+ (id)operationErrorWithCode:(long long)a0 withDescription:(id)a1;

- (void)main;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0 adjustmentData:(id)a1;

@end
