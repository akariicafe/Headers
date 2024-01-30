@class NSString, NSBundle;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider>

@property (retain, nonatomic) NSBundle *bundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleProvider;

- (void).cxx_destruct;
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })alertBackgroundSizeForType:(unsigned long long)a0;
- (int)alertBackgroundStyleForType:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alertContentEdgeInsetsForType:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alertEdgeInsetsForType:(unsigned long long)a0;
- (double)alertFadeAnimationDurationForType:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alertIconImageEdgeInsetsForType:(unsigned long long)a0;
- (int)alertPositionForType:(unsigned long long)a0;
- (BOOL)alertShouldGrowInAxis:(long long)a0 forType:(unsigned long long)a1;
- (id)alertSubtitleTextColorForType:(unsigned long long)a0;
- (id)alertSubtitleTextFontForType:(unsigned long long)a0;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)a0;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)a0;
- (id)alertTextColorForType:(unsigned long long)a0;
- (id)alertTextFontForType:(unsigned long long)a0;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)a0;

@end
