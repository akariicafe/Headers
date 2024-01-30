@class PRPosterColor, NSString;

@interface PREditorColorPickerCustomColor : NSObject <PREditorColorPickerColor>

@property (readonly, copy, nonatomic) id /* block */ colorProvider;
@property (readonly) BOOL isCustomColor;
@property (readonly) BOOL isVibrantColor;
@property (readonly, nonatomic) double initialVariation;
@property (readonly, copy, nonatomic) PRPosterColor *baseColor;
@property (readonly, nonatomic) PRPosterColor *leftSliderColor;
@property (readonly, nonatomic) PRPosterColor *rightSliderColor;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)colorWithVariation:(double)a0;
- (id)displayColorWithVariation:(double)a0;
- (id)initWithDefaultInitialVariation:(double)a0 colorProvider:(id /* block */)a1;
- (id)initWithInitialVariation:(double)a0 colorProvider:(id /* block */)a1;
- (id)initWithInitialVariation:(double)a0 colorProvider:(id /* block */)a1 localizedName:(id)a2;

@end
