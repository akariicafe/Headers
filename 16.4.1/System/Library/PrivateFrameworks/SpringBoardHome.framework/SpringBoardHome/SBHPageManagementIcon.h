@class SBIconListModel;

@interface SBHPageManagementIcon : SBLeafIcon

@property (readonly, nonatomic) SBIconListModel *listModel;

- (BOOL)canBeAddedToSubfolder;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)canReceiveGrabbedIcon;
- (BOOL)canBeReceivedByIcon;
- (void).cxx_destruct;
- (id)initWithListModel:(id)a0;

@end
