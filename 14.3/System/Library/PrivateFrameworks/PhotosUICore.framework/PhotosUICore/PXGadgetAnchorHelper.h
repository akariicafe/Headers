@class PXGadgetNavigationHelper, PXGadgetDataSourceManager;
@protocol PXGadgetAnchorHelperDelegate, PXGadget;

@interface PXGadgetAnchorHelper : NSObject

@property (retain, nonatomic) id<PXGadget> currentAnchor;
@property (retain, nonatomic) PXGadgetNavigationHelper *navigationHelper;
@property (retain, nonatomic) PXGadgetDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id<PXGadgetAnchorHelperDelegate> delegate;
@property (nonatomic) long long anchorPosition;
@property (readonly, nonatomic) BOOL hasAnchor;

- (void).cxx_destruct;
- (void)saveAnchor;
- (id)_generateAnchor;
- (id)_convertIndexPathToGadget:(id)a0;
- (id)initWithNavigationHelper:(id)a0 dataSourceManager:(id)a1;
- (void)clearAnchor;
- (void)saveGadgetAsAnchor:(id)a0;
- (void)navigateToAnchorIfNeeded;

@end
