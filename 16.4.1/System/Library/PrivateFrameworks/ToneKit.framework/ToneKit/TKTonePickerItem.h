@class NSArray, TKTonePickerSectionItem, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>

@property (weak, nonatomic, setter=_setParentSectionItem:) TKTonePickerSectionItem *parentSectionItem;
@property (copy, nonatomic, setter=_setChildrenToneClassicsPickerItems:) NSArray *childrenToneClassicsPickerItems;
@property (nonatomic, setter=_setItemKind:) unsigned long long itemKind;
@property (nonatomic, setter=_setNeedsRoomForCheckmark:) BOOL needsRoomForCheckmark;
@property (nonatomic, setter=_setNeedsActivityIndicator:) BOOL needsActivityIndicator;
@property (nonatomic, setter=_setNeedsDownloadProgress:) BOOL needsDownloadProgress;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (readonly, nonatomic) long long numberOfChildren;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)a0;
- (id)childItemAtIndex:(long long)a0;

@end
