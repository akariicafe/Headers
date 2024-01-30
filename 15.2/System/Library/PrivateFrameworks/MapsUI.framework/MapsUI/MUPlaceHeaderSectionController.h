@class NSString, MUPlaceHeaderView, MUPlaceHeaderSectionControllerConfiguration;
@protocol _MKPlaceItem, MUPlaceHeaderSectionControllerDelegate;

@interface MUPlaceHeaderSectionController : MUPlaceSectionController <MUPlaceHeaderViewDelegate> {
    MUPlaceHeaderView *_headerView;
    id<_MKPlaceItem> _placeItem;
    MUPlaceHeaderSectionControllerConfiguration *_configuration;
}

@property (weak, nonatomic) id<MUPlaceHeaderSectionControllerDelegate> headerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (id)sectionView;
- (id)draggableContent;
- (void)hideTitle:(BOOL)a0;
- (int)analyticsModuleType;
- (id)initWithPlaceItem:(id)a0 configuration:(id)a1;
- (void)headerView:(id)a0 didSelectEnclosingMapItem:(id)a1;
- (void)_setupHeaderView;
- (void)_notifyDidTapParentMapItem:(id)a0;
- (void)headerView:(id)a0 didSelectEnclosingMapItemIdentifier:(id)a1;

@end
