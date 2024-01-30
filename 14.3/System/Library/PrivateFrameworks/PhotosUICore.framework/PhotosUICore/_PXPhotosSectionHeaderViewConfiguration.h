@class _PXAlbumSectionHeaderLayout, NSString, NSArray, UIImage, NSDate, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface _PXPhotosSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *locationNames;
@property (nonatomic) BOOL allowsPhotosDetailsInteraction;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (retain, nonatomic) UIImage *gradientImage;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientOverhang;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec;
@property (weak, nonatomic) _PXAlbumSectionHeaderLayout *weakLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
