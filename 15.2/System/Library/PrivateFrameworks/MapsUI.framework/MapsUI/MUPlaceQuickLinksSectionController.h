@class NSArray, MUActionGroupSectionView, MUPlaceSectionView;
@protocol MUPlaceQuickLinksSectionControllerDelegate;

@interface MUPlaceQuickLinksSectionController : MUPlaceSectionController {
    NSArray *_quickLinks;
    MUPlaceSectionView *_sectionView;
    MUActionGroupSectionView *_cardContentView;
    BOOL _active;
}

@property (weak, nonatomic) id<MUPlaceQuickLinksSectionControllerDelegate> quickLinkProviderDelegate;

- (id)initWithMapItem:(id)a0;
- (BOOL)isActive;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)sectionView;
- (void)setActive:(BOOL)a0;
- (int)analyticsModuleType;
- (void)_setupSectionView;
- (void)_fetchQuickLinksIfNeeded;
- (void)_buildContentViews;
- (void)_performTapInstrumentationWithQuickLink:(id)a0;
- (void)_instrumentShortcutWithURLString:(id)a0;
- (void)_instrumentAppClipWithURLString:(id)a0;

@end
