@class NSNumber;

@interface CAMUserPreferenceOverrides : NSObject

@property (retain, nonatomic) NSNumber *captureMode;
@property (retain, nonatomic) NSNumber *captureDevice;
@property (retain, nonatomic) NSNumber *videoConfiguration;
@property (retain, nonatomic) NSNumber *wantsQRCodes;
@property (retain, nonatomic) NSNumber *flashMode;
@property (retain, nonatomic) NSNumber *torchMode;
@property (retain, nonatomic) NSNumber *aspectRatioCrop;
@property (readonly, nonatomic) BOOL hasOverrides;

- (void).cxx_destruct;
- (id)initWithLaunchOptions:(id)a0;
- (id)initWithOverrides:(id)a0;
- (id)initWithShortcutItem:(id)a0;
- (id)initWithConfigurationURL:(id)a0;

@end
