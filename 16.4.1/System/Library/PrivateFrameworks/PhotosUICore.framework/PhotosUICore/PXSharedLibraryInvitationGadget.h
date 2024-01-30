@class NSString, PXSharedLibraryInvitationView, PXGadgetSpec;
@protocol PXSharedLibrary, PXGadgetDelegate;

@interface PXSharedLibraryInvitationGadget : NSObject <PXSharedLibraryInvitationViewDelegate, PXGadget> {
    BOOL _didLoadSharedLibrary;
    PXSharedLibraryInvitationView *_invitationView;
}

@property (retain, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)contextMenuActionsForInvitationView:(id)a0;
- (void)invitationViewSizeThatFitsDidChange:(id)a0;
- (void)prepareCollectionViewItem:(id)a0;
- (BOOL)supportsHighlighting;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;

@end
