@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int timeScale;
@property (nonatomic) int frameRate;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) struct CGSize { double x0; double x1; } compositionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
