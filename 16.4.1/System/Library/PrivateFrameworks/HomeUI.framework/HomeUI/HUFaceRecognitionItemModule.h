@class HMHome, HFStaticItemProvider, HFStaticItem;

@interface HUFaceRecognitionItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFStaticItem *faceRecognitionCellItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;

@end
