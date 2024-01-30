@class SBIconListModel;

@interface SBHPageManagementIcon : SBLeafIcon

@property (readonly, nonatomic) SBIconListModel *listModel;

- (BOOL)canBeReceivedByIcon;
- (BOOL)canReceiveGrabbedIcon;
- (BOOL)canBeAddedToSubfolder;
- (void).cxx_destruct;
- (BOOL)canBeAddedToMultiItemDrag;
- (id)initWithListModel:(id)a0;

@end
