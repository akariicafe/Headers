@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) struct CGSize { double width; double height; } contentBackgroundSize;
@property (nonatomic) double continuousCornerRadius;
@property (nonatomic) double titleFontSizeInPortrait;
@property (nonatomic) double titleFontSizeInLandscape;
@property (nonatomic) double titleHorizontalInset;
@property (nonatomic) double pageControlAreaHeight;
@property (nonatomic) struct CGSize { double width; double height; } pageControlCustomPadding;
@property (nonatomic) double rubberBandIntervalForOverscroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)setTitleFontSizeInAllOrientations:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
