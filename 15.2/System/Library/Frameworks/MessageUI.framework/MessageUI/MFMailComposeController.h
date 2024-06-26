@class NSDate, MFLANHandoffAgent, MFPhotoPickerProgressManager, NSDictionary, NSMutableSet, UIBarButtonItem, MFComposeDisplayMetrics, UIProgressView, EFFuture, MFMailSignatureController, _MFMailCompositionContext, MFComposeImageSizeView, MSAutosaveSession, CNComposeRecipientAtom, UIImagePickerController, MFMailPopoverManager, UIButton, CNContactViewController, MFMessageContentProgressLayer, UIResponder, MFMailComposeRecipientTextView, UIAlertController, MFOutgoingMessageDelivery, UIWindow, MFMutableMessageHeaders, CNContactPickerViewController, MFComposeWebView, VNDocumentCameraViewController, QLPreviewController, MFSecureMIMECompositionManager, UIView, CNRecentComposeRecipient, NSArray, MFAttachment, MFPhotoPickerController, CNComposeRecipient, NSString, NSObject, EMMessage, MFComposeSubjectView, MFAddressPickerReformatter, MFComposeActivityHandoffOperation, NSTimer, MFMailComposeToField, MFLock, MFComposeStyleSelectorViewController, EMMailboxObjectID;
@protocol MFMailAccountProxyGenerator, EFScheduler, OS_dispatch_group;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactContentViewControllerDelegate, MFMailComposeToFieldDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeStyleSelectorViewControllerDelegate, MFPhotoPickerControllerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, VNDocumentCameraViewControllerDelegate, _MFMailCompositionContextDelegate, MFPreferredTitleProvider, ComposeViewNavigationBarDelegate, MFMailComposeViewDelegate, MFMailMenuCommandProvider, CNComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, MFMailComposeRecipientTextViewDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate> {
    _MFMailCompositionContext *_compositionContext;
    unsigned long long _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    long long _sendingEmailAddressIndex;
    unsigned long long _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    UIButton *_sendAccessoryButton;
    MFPhotoPickerController *_photosPickerController;
    UIImagePickerController *_cameraPickerController;
    MFMailComposeToField *_toField;
    MFMailComposeRecipientTextView *_ccField;
    MFMailComposeRecipientTextView *_lastFocusedRecipientView;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeWebView *_composeWebView;
    CNRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    MFMutableMessageHeaders *_savedHeaders;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    NSString *_autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    BOOL _encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    unsigned char _isDirty : 1;
    unsigned char _bodyTextChanged : 1;
    unsigned char _shouldAutosaveWithSuspendInfo : 1;
    unsigned char _isSuspended : 1;
    unsigned char _viewWasUnloaded : 1;
    unsigned char _stillLoading : 1;
    unsigned char _hosted : 1;
    unsigned char _hasViewAppeared : 1;
    unsigned char _rotationSnapshotTaken : 1;
    unsigned char _isPopoverVisible : 1;
    unsigned char _useSuspended : 1;
    MFAddressPickerReformatter *_addressPickerReformatter;
    BOOL _contentVisible;
    BOOL _allowRestrictedAccounts;
    BOOL _encryptionOverrideSetting;
    BOOL _initializedRecipients;
    BOOL _originalMessageWasEncrypted;
    unsigned long long _selectedContentVariationIndex;
    UIAlertController *_notifyConfirmation;
    MFComposeActivityHandoffOperation *_handoffOperation;
    UIProgressView *_handoffProgressView;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFLANHandoffAgent *_LANHandoffAgent;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    unsigned short _lastTypedCharacter;
    NSTimer *_autosaveTimer;
    NSDate *_lastActiveDate;
    NSDictionary *_securityScopes;
    _Atomic unsigned int _autosaveCount;
    EFFuture *_undoMoveAction;
    id /* block */ _releaseActiveFocusedState;
    MFMailSignatureController *_signatureController;
    UIResponder *_savedFirstResponder;
    EFFuture *_content;
    unsigned long long _drawingSequenceNumber;
    UIWindow *_containingWindow;
    struct { BOOL respondsToCompositionWillFinish; BOOL respondsToCompositionDidFailToFinish; } _composeWebViewFlags;
}

@property (class, readonly, nonatomic) NSArray *menuCommands;

@property (retain, nonatomic) id<MFMailAccountProxyGenerator> accountProxyGenerator;
@property (retain, nonatomic) UIAlertController *popoverAlert;
@property (weak, nonatomic) QLPreviewController *previewController;
@property (retain, nonatomic) MFAttachment *previewingAttachment;
@property (nonatomic) BOOL insertingDrawing;
@property (retain, nonatomic) CNContactPickerViewController *peoplePicker;
@property (retain, nonatomic) CNContactViewController *contactViewController;
@property (retain, nonatomic) CNComposeRecipientAtom *atomPresentingCard;
@property (retain, nonatomic) CNComposeRecipient *recipientPresentingCard;
@property (retain, nonatomic) NSDictionary *certificatesByRecipient;
@property (retain, nonatomic) NSDictionary *errorsByRecipient;
@property (copy, nonatomic) NSString *addressForMissingIdentity;
@property (nonatomic) BOOL attachmentToMarkupIsLoaded;
@property (nonatomic) BOOL delayToShowMarkupHasPassed;
@property (nonatomic) unsigned long long markupReplyAttachmentLoadingProgress;
@property (nonatomic) BOOL autosaveIsValid;
@property (retain, nonatomic) NSMutableSet *drawingFileAttachments;
@property (nonatomic) long long drawingInsertCount;
@property (copy, nonatomic) NSString *hideMyEmailAddressIfExists;
@property (readonly, nonatomic, getter=isVerticallyCompact) BOOL verticallyCompact;
@property (retain, nonatomic) id<EFScheduler> autosaveQueue;
@property (retain, nonatomic) MSAutosaveSession *autosaveSession;
@property (weak, nonatomic) VNDocumentCameraViewController *documentCameraViewController;
@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;
@property (retain, nonatomic) MFPhotoPickerProgressManager *photoPickerProgressManager;
@property (retain, nonatomic) NSString *autosaveIdentifier;
@property (retain, nonatomic) MFComposeStyleSelectorViewController *styleSelector;
@property (retain, nonatomic) NSDictionary *fontAttributes;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) id remoteViewControllerProxy;
@property (readonly, nonatomic) MFOutgoingMessageDelivery *delivery;
@property (readonly, nonatomic) EMMessage *lastDraftMessage;
@property (readonly, nonatomic) EMMailboxObjectID *draftMailboxObjectID;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (readonly, nonatomic) NSString *documentID;
@property (nonatomic) int sourceAccountManagement;
@property (nonatomic) BOOL useMailDrop;
@property (readonly, nonatomic) NSDate *autosavedDate;
@property (readonly, nonatomic) long long countofDrawingAttachmentsLeftInCompose;
@property (readonly, nonatomic) NSString *subject;
@property (nonatomic) BOOL isModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)signpostLog;
+ (id)preferenceForKey:(id)a0;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)a0 originatingBundleID:(id)a1 sourceAccountManagement:(int)a2;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)a0;

- (void)prepareForPopoverPresentation:(id)a0;
- (id)toRecipients;
- (void)setContentVisible:(BOOL)a0;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 propertyIdentifier:(id)a3;
- (void)contentDidChange;
- (void)viewLayoutMarginsDidChange;
- (void)applicationWillSuspend;
- (void)sendMessage:(unsigned long long)a0;
- (void)send:(id)a0;
- (BOOL)hosted;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)userActivity:(id)a0 didReceiveInputStream:(id)a1 outputStream:(id)a2;
- (void)_endBlockingBodyScroll;
- (void)contactViewController:(id)a0 didDeleteContact:(id)a1;
- (int)resolution;
- (id)keyCommands;
- (void)_close;
- (void)viewWillDisappear:(BOOL)a0;
- (void)previewController:(id)a0 didSaveEditedCopyOfPreviewItem:(id)a1 atURL:(id)a2;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)_getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)_accountsChanged:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (id)composeWebView;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)dismissActionsForPreviewController:(id)a0;
- (id)emailAddresses;
- (void)loadView;
- (void)_beginBlockingBodyScroll;
- (id)presentationViewController;
- (BOOL)isDirty;
- (void)previewControllerDidDismiss:(id)a0;
- (void)saveFirstResponder;
- (void)_displayMetricsDidChange;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateUserActivityState:(id)a0;
- (id)attachments;
- (void)applicationDidResume;
- (id)rotatingHeaderView;
- (BOOL)hasAttachments;
- (void)viewDidUnload;
- (void)autosaveWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)bccRecipients;
- (void)setToRecipients:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)viewWillUnload;
- (id)navigationBarTitle;
- (void)_prepareForSuspend;
- (void)setSubject:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (id)ccRecipients;
- (void)close:(id)a0;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_removeRecent;
- (unsigned long long)signpostID;
- (void)photoPickerDidCancel:(id)a0;
- (id)composeRecipientView:(id)a0 composeRecipientForContact:(id)a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)setPrefersLargeTitles:(BOOL)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)composeHeaderViewDidChangeValue:(id)a0;
- (void)composeHeaderViewDidConfirmValue:(id)a0;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientView:(id)a0 didReplaceRecipients:(id)a1 withRecipients:(id)a2;
- (void)composeRecipientView:(id)a0 didSelectRecipients:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)recipientViewDidBecomeFirstResponder:(id)a0;
- (void)recipientViewDidResignFirstResponder:(id)a0;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)composeRecipientView:(id)a0 showPersonCardForAtom:(id)a1;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)composeRecipientView:(id)a0 disambiguateRecipientForAtom:(id)a1;
- (void)composeRecipientView:(id)a0 showPersonCardForRecipient:(id)a1;
- (unsigned long long)presentationOptionsForRecipient:(id)a0;
- (void)composeRecipientViewReturnPressed:(id)a0;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)a0;
- (BOOL)composeRecipientViewShowingSearchResults:(id)a0;
- (BOOL)presentSearchResultsForComposeRecipientView:(id)a0;
- (void)dismissSearchResultsForComposeRecipientView:(id)a0;
- (void)selectNextSearchResultForComposeRecipientView:(id)a0;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)a0;
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)a0;
- (void)autocompleteGroupDetailViewControllerDidCancel:(id)a0;
- (void)autocompleteGroupDetailViewController:(id)a0 didTapComposeRecipient:(id)a1;
- (void)autocompleteGroupDetailViewController:(id)a0 didAskToRemoveGroup:(id)a1;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (id)_contactViewControllerForRecipient:(id)a0;
- (BOOL)_shouldUseMailDrop;
- (void)secureMIMECompositionManager:(id)a0 signingStatusDidChange:(int)a1 context:(id)a2;
- (void)secureMIMECompositionManager:(id)a0 encryptionStatusDidChange:(int)a1 context:(id)a2;
- (Class)_deliveryClass;
- (void)setHosted:(BOOL)a0;
- (void)activityHandoffOperation:(id)a0 didFailWithError:(id)a1;
- (void)activityHandoffOperation:(id)a0 didFinishSendingDataWithResult:(long long)a1;
- (void)activityHandoffOperationReceivedBytes:(id)a0;
- (void)activityHandoffOperation:(id)a0 didFinishReceivingData:(id)a1;
- (void)setCcRecipients:(id)a0;
- (void)setBccRecipients:(id)a0;
- (void)imageSizeView:(id)a0 changedSelectedScaleTo:(unsigned long long)a1;
- (unsigned long long)_defaultAtomPresentationOptions;
- (BOOL)_wantsEncryption;
- (void)composeStyleSelector:(id)a0 didSelectStyle:(id)a1;
- (void)composeStyleSelectorDidCancel:(id)a0;
- (void)composeStyleSelectorDidPresentColorPicker:(id)a0;
- (id)presentingViewControllerForComposeStyleSelector:(id)a0;
- (void)composeStyleSelector:(id)a0 didChangeFontSize:(double)a1;
- (void)composeStyleSelector:(id)a0 didChangeTextColor:(id)a1;
- (void)composeStyleSelectorDidDismissFontPicker:(id)a0;
- (void)composeStyleSelector:(id)a0 didChangeFont:(id)a1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)a0;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)a0;
- (void)composeSubjectViewWillRemoveContent:(id)a0;
- (long long)composeType;
- (id)savedHeaders;
- (id)sendingEmailAddress;
- (void)addSignature:(BOOL)a0;
- (void)setOriginalMessageWasEncrypted:(BOOL)a0;
- (void)setSendingEmailAddress:(id)a0;
- (void)setSavedHeaders:(id)a0;
- (void)setSendingEmailAddressAsHME:(id)a0 isComposeTypeReply:(BOOL)a1;
- (unsigned long long)contentVariationIndex;
- (id)shouldCreateRichTextRepresentation;
- (void)markupAttachment:(id)a0;
- (void)finalizeSignature:(id /* block */)a0;
- (void)removeSignature;
- (id)compositionContext;
- (long long)compositionType;
- (void)showStyleSelector:(id)a0;
- (BOOL)canShowAttachmentPicker;
- (void)showPhotoPickerWithSourceType:(long long)a0 fromSource:(id)a1;
- (void)insertDrawing;
- (void)importDocument;
- (void)scanDocument;
- (void)changeQuoteLevel:(long long)a0;
- (void)didInsertAttachment:(id)a0;
- (void)insertPhotoOrVideo;
- (void)showMissingAttachmentDataAlert;
- (void)composeWebViewDidChangeFontAttributes:(id)a0;
- (void)takeFocusFromComposeWebView:(id)a0 inDirection:(unsigned long long)a1;
- (void)didRemoveAttachment:(id)a0;
- (void)setCaretPosition:(unsigned long long)a0;
- (id)mailComposeView;
- (void)setAddresses:(id)a0 field:(int)a1;
- (void)_updateNavigationBarTitleAnimated:(BOOL)a0;
- (id)_alternateTitleView;
- (void)_resetSecureCompositionManager;
- (BOOL)_secureCompositionManagerHasRecipients;
- (id)_defaultAccount;
- (void)_resetProxyGenerator;
- (id)sendingEmailAddressIfExists;
- (BOOL)_setSendingEmailAddress:(id)a0;
- (id)_availableAccountProxies;
- (void)setProgressUIVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)clearAllFields;
- (void)_loadCompositionContext;
- (void)_prepareCompositionContextForLoading:(id)a0;
- (void)_setupForDraft:(id)a0;
- (void)_setupForExistingNewMessage:(id)a0 content:(id)a1;
- (void)_setupForOutbox:(id)a0;
- (void)_setupForAutosavedMessage:(id)a0;
- (void)_updateSendAndCloseEnabled;
- (void)_checkForReplyAndForwardRestriction;
- (BOOL)_isRestoredComposition;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)a0;
- (id)contentVariationName;
- (void)_setIsLoading:(BOOL)a0;
- (void)_loadingContextDidLoadMessage;
- (void)_loadAttachments;
- (void)pickInitialFirstResponder;
- (void)_updateImageSizeTitles;
- (BOOL)_isReplyOrForward;
- (void)_updateManagedPasteboardOwner;
- (void)setDraftMessage:(id)a0;
- (BOOL)_setSendingEmailAddressAsHME:(id)a0;
- (void)updateSignature;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)a0;
- (void)_finishedLoadingAllContentAndAttachments;
- (BOOL)_isDummyViewController;
- (void)_makeComposeUserActivityCurrent;
- (void)_setAutosaveIsValid:(BOOL)a0;
- (void)_draftContentDidChange;
- (void)_getHMEEmailFromOriginalAddress:(id)a0;
- (void)_presentModalAlert:(id)a0;
- (void)_removeAutoBccSendingAddress:(id)a0;
- (id)_allRecipients;
- (void)_resetSecureCompositionManagerUsingNewAccount:(BOOL)a0;
- (void)_updateAutoBccSendingAddress:(id)a0 withNewSendingAddress:(id)a1;
- (BOOL)isAddressHideMyEmail:(id)a0;
- (void)_updateAutoBccSendingAddress:(id)a0 withNewSendingAddress:(id)a1 alwaysAdd:(BOOL)a2;
- (id)sendingAccountProxy;
- (id)_emailAddressesWithHME;
- (BOOL)isManagedAccount;
- (id)_backgroundColorForMarkupController;
- (void)_dismissPresentedHalfSheet;
- (id)_nextDrawingName;
- (void)_finishPopoverAlertClosingComposition:(BOOL)a0;
- (void)_documentCameraViewControllerDidFinish;
- (id)_addressFieldForField:(int)a0;
- (id)addressesForField:(int)a0;
- (void)_setRecipients:(id)a0 forField:(int)a1;
- (void)addAddress:(id)a0 field:(int)a1;
- (void)removeAddress:(id)a0 field:(int)a1;
- (id)_allRecipientViews;
- (void)_willPresentDocumentPicker;
- (void)_didDismissDocumentPicker;
- (void)_showCamera:(id)a0;
- (void)_showPhotoPicker:(id)a0;
- (void)_preparePhotoPicker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_optimalRectForPresentingPopoverInComposeWebView;
- (id)_sheetDetentForIdentifier:(id)a0 viewController:(id)a1;
- (void)_retainFocusOfComposeWebViewIfRequired:(id)a0;
- (void)insertPhotoOrVideoWithAssetIdentifier:(id)a0 info:(id)a1;
- (void)_dismissAndCleanupCameraPickerController;
- (BOOL)_shouldEnableSendButton;
- (BOOL)_shouldEnableCloseButton;
- (BOOL)_isSetupForDelivery;
- (BOOL)_isPopoverOrActionSheetOrAlertVisible;
- (BOOL)sendingAccountIsExchange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAttachmentWithIdentifier:(id)a0;
- (BOOL)canShowImageSizeField;
- (unsigned long long)_sizeForScale:(unsigned long long)a0 imagesOnly:(BOOL)a1;
- (void)_setInitialStateForImageField;
- (void)_scaleImages;
- (void)_autosaveTimerFired:(id)a0;
- (void)_startAutosaveTimerIfNeeded;
- (void)_setTitleBarSubtitleText:(id)a0 style:(unsigned long long)a1;
- (BOOL)_shouldAutosaveAfterTimerFiredWithInterval:(double)a0;
- (void)_updateAutosaveSession;
- (void)_saveMessageValues;
- (void)setHeadersForDraft;
- (id)_messageForAutosave;
- (void)_setUpForSaveAsDraft;
- (void)_setUpDraftForHME;
- (void)_finishedComposing;
- (void)_leaveMessageInOutbox;
- (void)_displayPopoverAlert:(id)a0;
- (id)_outgoingMessageWithSubstituteDocument:(id)a0 compositionSpecification:(id)a1 useSuspendInfo:(BOOL)a2 endingEditing:(BOOL)a3;
- (id)_messageWithCompositionSpecification:(id)a0 useSuspendInfo:(BOOL)a1 endingEditing:(BOOL)a2;
- (unsigned long long)_composeWebViewTextContentLength;
- (void)_checkForCanSendMailWithContinuation:(id /* block */)a0;
- (void)_promptForMailDropIfNecessaryWithContinuation:(id /* block */)a0;
- (void)_prepareImagesForSendWithContinuation:(id /* block */)a0;
- (void)_checkForInFlightAssetDownloadsWithContinuation:(id /* block */)a0;
- (void)_checkForUnencryptedWithContinuation:(id /* block */)a0;
- (void)_checkForEmptySubjectWithContinuation:(id /* block */)a0;
- (void)_checkForInvalidAddressesWithContinuation:(id /* block */)a0;
- (void)_prepareHMEAddressesWithContinuation:(id /* block */)a0;
- (void)_finishModalAlertClosingComposition:(BOOL)a0;
- (void)_physicallyScaleImagesToScale:(unsigned long long)a0;
- (id)_estimateMessageSize;
- (void)_setUpDeliveryObject:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_messageForRemoteDelivery;
- (id)_messageForDraft;
- (BOOL)isHideMyEmailMessage;
- (void)_explainAirplaneMode;
- (BOOL)needsDelivery;
- (void)deliverMessageRemotely:(id /* block */)a0;
- (void)_bodyTextChanged;
- (void)_subjectTextChanged:(id)a0;
- (void)_recipientTextChanged:(id)a0;
- (void)_composeViewDidDraw:(id)a0;
- (void)_focusGained:(id)a0;
- (void)_restoreMessageValues;
- (void)_setupLargeTitleAccessory;
- (void)_setupNavigationBarItems;
- (int)_fieldForAddressField:(id)a0;
- (id)_attachmentToMarkup;
- (void)_sendViewVisibilityNotification:(id)a0 window:(id)a1;
- (void)clearInitialTitle;
- (id)popoverManagerCreateIfNeeded:(BOOL)a0;
- (void)_updateSendAndCloseButtonTintColor;
- (void)dismissSheet;
- (void)_clearMessageValues;
- (void)_dismissPeoplePicker:(id)a0;
- (void)_finishEnteringRecipients;
- (BOOL)_isActiveComposeController;
- (void)_updateRecipientAtomStyles;
- (void)didBecomeActiveComposeController;
- (void)_popoverWillBePresented:(id)a0;
- (id)_copyMessagePlainTextForDonation;
- (id)_copyMessagePlainTextForDonationRemoveQuotes:(BOOL)a0;
- (void)_escapeShortcutInvoked:(id)a0;
- (void)_tabKeyCommandInvoked:(id)a0;
- (void)_replyAllCommandInvoked:(id)a0;
- (void)_replyCommandInvoked:(id)a0;
- (void)_focusBccHeaderCommandInvoked:(id)a0;
- (BOOL)_isTabKeyCommandInvocationPossible;
- (void)_dismissPersonCard;
- (void)_setComposeWebViewAutocorrectionContext:(id)a0;
- (void)_recipientTextChangedForHME;
- (void)_showOriginalAttachmentsIfNecessary;
- (void)_updateComposeWebViewAutoCorrectionContext;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (BOOL)_anyRecipientViewContainsAddress:(id)a0;
- (BOOL)_hasEncryptionIdentityError;
- (void)_setLastFocusedRecipientView:(id)a0;
- (BOOL)isShowingRecentPersonCard;
- (void)_updatePersonCard;
- (id)navigationControllerForRecentPersonCard;
- (void)_showPersonCardForRecipient:(id)a0 showDeleteButton:(BOOL)a1;
- (void)_dismissPresentedViewController;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)a0;
- (void)_updateTitleBarForEncryptionStatus:(int)a0;
- (BOOL)_hasRecipients;
- (void)_showMissingIdentityAlert;
- (id)_missingIdentityErrorWithFormat:(id)a0 title:(id)a1;
- (void)_updateIdentityStatus:(int *)a0 withPolicy:(int)a1 identity:(struct __SecIdentity { } *)a2 error:(id)a3;
- (void)_hideHandoffProgressViewAnimated:(BOOL)a0;
- (id)_copyMessageDataForActivityHandoff;
- (void)setCompositionContext:(id)a0;
- (void)_createAndAddHandoffProgressViewIfNecessary;
- (BOOL)shouldShowSMIMEButton;
- (void)tappedSMIMEButton;
- (void)photoPicker:(id)a0 didSelectAssetWithIdentifier:(id)a1 mediaInfo:(id)a2;
- (void)photoPickerDidCancelSystemImagePicker:(id)a0;
- (void)photoPicker:(id)a0 didDeselectAssetWithIdentifier:(id)a1;
- (id)presentingViewControllerForPhotoPicker:(id)a0;
- (void)documentCameraViewController:(id)a0 didFinishWithScan:(id)a1;
- (void)documentCameraViewControllerDidCancel:(id)a0;
- (void)mailCompositionContext:(id)a0 messageDidChange:(id)a1;
- (void)mailCompositionContext:(id)a0 didFinishLoadingMessage:(id)a1 legacyMessage:(id)a2 error:(id)a3;
- (id)mf_preferredTitle;
- (BOOL)getPrefersLargeTitles;
- (BOOL)canShowFromField;
- (BOOL)sendingEmailDirtied;
- (BOOL)bccAddressesDirtied;
- (id)currentScaleImageSize;
- (id)popoverManager;
- (void)didInsertBodyText:(id)a0;
- (void)composeViewBodyTextChanged:(id)a0;
- (BOOL)canShowContentVariationPicker;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalContentInsetForComposeWebView:(id)a0;
- (id)nextResponderForRecipientView:(id)a0;
- (void)composeRecipientView:(id)a0 didFinishAddingRecipient:(id)a1;
- (id)initWithCompositionContext:(id)a0 options:(unsigned long long)a1;
- (void)setInitialTitle:(id)a0;
- (unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)a0 defaultFontSize:(double)a1;
- (id)_reformattedAddressAtIndex:(unsigned long long)a0;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (void)saveAndResignFirstResponder;
- (id)_selectedAttachmentURLs;
- (void)_updateOriginalBccStatusForRestore;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfAttachment:(id)a0;
- (void)_unscaleImages;
- (void)autosaveIfNecessaryWithHandler:(id /* block */)a0;
- (void)backUpDraft;
- (void)finishedBackingUpDraftWithSuccess:(BOOL)a0;
- (void)presentSaveDeleteDialogOrClose;
- (void)serializedPlaceholderForFileName:(id)a0 fileSize:(long long)a1 mimeType:(id)a2 contentID:(id)a3 withHandler:(id /* block */)a4;
- (void)securityScopeForURL:(id)a0 withHandler:(id /* block */)a1;
- (void)forceSaveAsDraft;
- (BOOL)isSavingAsDraft;
- (void)setRecipientsKeyboardType:(long long)a0;
- (void)hostApplicationDidEnterBackground;
- (void)hostApplicationWillEnterForeground;
- (id)_messageToDonate;
- (long long)popoverPresentationStyleForViewController:(id)a0;
- (void)composeSubjectViewDidSelectContentVariationButton:(id)a0;
- (void)handleLargeMessageComposeHandoffWithInputStream:(id)a0 outputStream:(id)a1 error:(id)a2;

@end
