@class NSString, UIImage, UIView, _SWCollaborationButtonViewImpl;
@protocol UICloudSharingControllerDelegate, SWCollaborationViewDelegate;

@interface SWCollaborationView : UIView

@property (nonatomic, readonly) _SWCollaborationButtonViewImpl *buttonView;
@property (retain, nonatomic) _SWCollaborationButtonViewImpl *buttonView;
@property (retain, nonatomic) UIView *typeErasedButtonView;
@property (retain, nonatomic) UIView *typeErasedButtonView;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> cloudSharingDelegate;
@property (nonatomic) unsigned long long activeParticipantCount;
@property (weak, nonatomic) id<SWCollaborationViewDelegate> delegate;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (retain, nonatomic) UIImage *headerImage;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> cloudSharingControllerDelegate;
@property (copy, nonatomic) NSString *manageButtonTitle;

- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (id)initWithItemProvider:(id)a0;
- (void)dismissPopover:(id /* block */)a0;
- (BOOL)_shouldOverrideSymbolConfigForIWork;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithButtonView:(id)a0;
- (id)initWithTypeErasedButtonView:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)updatePlaceholderGlyphScale:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

@end
