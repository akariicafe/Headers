@class NSArray, JFXComposition, NSString, UIImage, NSTimer;
@protocol JFXExportDelegate;

@interface JFXExportController : NSObject

@property unsigned long long exportStartTime;
@property (retain, nonatomic) JFXComposition *composition;
@property (retain, nonatomic) NSArray *presets;
@property (retain, nonatomic) NSString *currentPreset;
@property (retain, nonatomic) UIImage *poster;
@property (retain, nonatomic) id<JFXExportDelegate> delegate;
@property (retain, nonatomic) NSString *exportPath;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic) long long status;
@property (nonatomic) BOOL cancel;

+ (unsigned long long)estimatedFileSizeForDuration:(int)a0 frameRate:(double)a1 preset:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
+ (unsigned long long)dataRateForPreset:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (unsigned long long)videoDataRateForPreset:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (unsigned long long)audioDataRateForPreset:(id)a0;

- (float)progress;
- (void)startProgressTimer;
- (void).cxx_destruct;
- (void)stopProgressTimer;
- (unsigned long long)exportDuration;
- (id)initWithWithComposition:(id)a0 presets:(id)a1 toFile:(id)a2 poster:(id)a3 delegate:(id)a4;
- (void)beginAsynchronousExport;
- (void)cancelExportWithStatus:(long long)a0;
- (void)nextPreset;
- (void)analyticsForSessionBegin;
- (void)updateProgressViewWithProgress:(float)a0 reduced:(BOOL)a1;
- (void)continueExportAfterDelay;
- (void)closeSessionWithStatus:(long long)a0;
- (void)analyticsForSessionCompleteWithStatus:(long long)a0;
- (void)informDelegateOfCompletion;
- (void)serviceProgressTimer:(id)a0;
- (id)metadataToAdd;

@end
