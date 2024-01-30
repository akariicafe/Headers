@class PXGadgetNavigationHelper, PXGadgetDataSourceManager;
@protocol PXGadgetAnchorHelperDelegate, PXGadget;

@interface PXGadgetAnchorHelper : NSObject

@property (retain, nonatomic) id<PXGadget> currentAnchor;
@property (retain, nonatomic) PXGadgetNavigationHelper *navigationHelper;
@property (retain, nonatomic) PXGadgetDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id<PXGadgetAnchorHelperDelegate> delegate;
@property (nonatomic) long long anchorPosition;
@property (readonly, nonatomic) BOOL hasAnchor;

- (id)_convertIndexPathToGadget:(id)a0;
- (void)clearAnchor;
- (void)saveAnchor;
- (id)_generateAnchor;
- (void)navigateToAnchorIfNeeded;
- (void)saveGadgetAsAnchor:(id)a0;
- (void).cxx_destruct;
- (id)initWithNavigationHelper:(id)a0 dataSourceManager:(id)a1;

@end
