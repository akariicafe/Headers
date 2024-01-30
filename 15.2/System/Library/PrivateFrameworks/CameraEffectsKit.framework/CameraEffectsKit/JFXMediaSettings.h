@class NSString;
@protocol JFXMediaSettingsProvider;

@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (class, readonly, nonatomic) JFXMediaSettings *sharedInstance;
@property (class, retain, nonatomic) id<JFXMediaSettingsProvider> providerDelegate;
@property (class, readonly, nonatomic) int frameRate;
@property (class, readonly, nonatomic) int timeScale;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } frameSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } compositionSize;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)timeScale;
- (struct CGSize { double x0; double x1; })renderSize;
- (struct CGSize { double x0; double x1; })frameSize;
- (int)frameRate;
- (struct CGSize { double x0; double x1; })compositionSize;

@end
