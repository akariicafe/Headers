@class NSDictionary, NSString, UIWindowScene;

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject> {
    unsigned long long _hostedUseCount;
}

@property (retain, nonatomic) NSDictionary *perSceneOptions;
@property (retain, nonatomic) UIWindowScene *scene;
@property (nonatomic) BOOL useHostedInstance;
@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostingInfoForWindowScene:(id)a0;

- (id)_initWithCanvas:(id)a0 options:(id)a1;
- (BOOL)_matchingOptions:(id)a0;
- (void).cxx_destruct;

@end
