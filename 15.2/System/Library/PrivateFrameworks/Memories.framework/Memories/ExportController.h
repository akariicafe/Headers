@class NSArray, NSString, NSTimer, Project, BEAlertController;
@protocol MovieControllerExportProtocol;

@interface ExportController : NSObject {
    BOOL m_inTestMode;
    BOOL m_usingExistingRenderFile;
}

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) NSArray *presets;
@property (retain, nonatomic) NSString *currentPreset;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) id<MovieControllerExportProtocol> movieController;
@property (retain, nonatomic) NSString *exportPath;
@property (retain, nonatomic) NSArray *exportedPaths;
@property (nonatomic) BOOL exportToPhotos;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic) double exportAspect;
@property (retain, nonatomic) BEAlertController *testModeAutoExportCompletedAlert;

+ (unsigned long long)audioDataRateForPreset:(id)a0;
+ (BOOL)inTestMode;
+ (id)testModeProjectBundle;
+ (unsigned long long)testModeRepeatCount;
+ (unsigned long long)dataRateForPreset:(id)a0;
+ (unsigned long long)videoDataRateForPreset:(id)a0;
+ (unsigned long long)dataRateForiCloudHD;
+ (unsigned long long)dataRateForiCloud4G;
+ (BOOL)testModeCopyToCameraRoll;
+ (BOOL)testModeNoDialogAtEnd;
+ (void)exitTestMode;
+ (Class)exportControllerClass;
+ (id)testModeProjectPlaceholder;
+ (id)testModeProject:(id)a0;
+ (unsigned long long)testModeType;
+ (unsigned long long)testModeMaxFrameToProcess;
+ (id)currentTitle:(unsigned long long)a0;
+ (unsigned long long)estimatedVideoFileSizeForDuration:(int)a0 frameRate:(double)a1 preset:(id)a2 project:(id)a3;

- (id)thumbnailImage;
- (float)progress;
- (void)startProgressTimer;
- (void)closeSession;
- (void)dealloc;
- (void)cancelExport;
- (void)stopProgressTimer;
- (void)beginAsynchronousExport;
- (void)nextPreset;
- (void)updateProgressViewWithProgress:(float)a0 reduced:(BOOL)a1;
- (void)continueExportAfterDelay;
- (void)informDelegateOfCompletion;
- (void)serviceProgressTimer:(id)a0;
- (id)metadataToAdd;
- (id)initWithWithProject:(id)a0 presets:(id)a1 exportToPhotos:(BOOL)a2 delegate:(id)a3;
- (void)createMovieController;
- (void)releaseMovieController;
- (id)hasExistingFile;
- (void)writeVideoFileToSavedPhotoAlbum:(id)a0;
- (void)displayError:(id)a0;
- (void)displayExportedToPhotos;
- (void)displayDiskSpaceError;
- (void)displayAlertTitle:(id)a0 message:(id)a1;
- (void)noteSessionProgressed:(float)a0;

@end
