@class EKEvent, NSString, NSArray, EKUITableViewCell;

@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {
    NSArray *_cellControllers;
    EKUITableViewCell *_addAttachmentCell;
    BOOL _documentPickerPresented;
}

@property (retain) EKEvent *eventToModify;
@property BOOL attachmentsModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)_addAttachment:(id)a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)footerTitle;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)forceTableReloadOnSave;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (void)prepareForReload;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)a0;
- (BOOL)_shouldCondenseIntoSingleItem;
- (id)attachmentEvent;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (unsigned long long)numberOfSubitems;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (id)owningEventForAttachmentEditViewController:(id)a0;
- (void)attachmentEditViewController:(id)a0 attachmentDidChange:(long long)a1;
- (BOOL)_shouldShowAddAttachmentCell;
- (id)_addAttachmentCell;
- (void)_showAddAttachmentViewControllerAnimated:(BOOL)a0;
- (void)_loadAndAddDataAttachmentFromItem:(id)a0;
- (void)_cleanUpCellControllers;
- (id)owningEventForAttachmentCellController:(id)a0;

@end
