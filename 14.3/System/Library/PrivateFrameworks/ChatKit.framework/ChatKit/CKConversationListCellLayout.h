@interface CKConversationListCellLayout : NSObject

@property (nonatomic) BOOL invalid;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) double widthForDeterminingAvatarVisibility;
@property (nonatomic) double lastUsedDisplayScale;
@property (nonatomic) double cellHeight;
@property (nonatomic) double tableViewWidth;
@property (nonatomic) BOOL shouldShowChevron;
@property (nonatomic) BOOL shouldShowAvatarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } summaryFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dateFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } senderFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chevronFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unreadFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarFrame;
@property (nonatomic) double summaryLabelCapFrameYOrigin;
@property (nonatomic) double trailingLayoutMarginSize;

+ (id)sharedInstance;

- (id)init;
- (double)cellHeightForDisplayScale:(double)a0;
- (BOOL)isValidForContentViewWidth:(double)a0 widthForDeterminingAvatarVisibility:(double)a1;
- (void)markAsValidForContentViewWidth:(double)a0 widthForDeterminingAvatarVisibility:(double)a1;
- (void)invalidate;

@end
