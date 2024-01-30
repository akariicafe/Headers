@class NSString, PXActionableSectionHeaderLayout, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface _PXActionableSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long buttonStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long backgroundStyle;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (retain, nonatomic) UIImage *gradientImage;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientOverhang;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (nonatomic) BOOL avoidsTintedButtonsAtHighSpeeds;
@property (nonatomic) BOOL supportsMultipleLinesInCompactLayout;
@property (weak, nonatomic) PXActionableSectionHeaderLayout *weakLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
