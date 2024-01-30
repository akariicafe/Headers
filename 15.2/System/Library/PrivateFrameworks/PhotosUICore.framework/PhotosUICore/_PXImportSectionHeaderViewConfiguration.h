@class NSString, _PXImportSectionHeaderLayout, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface _PXImportSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) long long actionType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (retain, nonatomic) UIImage *gradientImage;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientOverhang;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec;
@property (weak, nonatomic) _PXImportSectionHeaderLayout *weakLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
