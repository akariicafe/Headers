@class UIColor, NSString, NSHashTable, MTVisualStylingProvider;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *tertiaryColor;
@property (retain, nonatomic) UIColor *quaternaryColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) BOOL supportsVibrancy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)notifyObservers;
- (void)addObserver:(id)a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (id)initWithVisualStylingProvider:(id)a0;
- (long long)visualStyleForNowPlayingStyle:(long long)a0;
- (id)colorForNowPlayingStyle:(long long)a0;
- (double)alphaForNowPlayingStyle:(long long)a0;
- (long long)blendModeForNowPlayingStyle:(long long)a0;
- (void)applyStyle:(long long)a0 toView:(id)a1;
- (void)applyStyle:(long long)a0 withBlock:(id /* block */)a1;

@end
