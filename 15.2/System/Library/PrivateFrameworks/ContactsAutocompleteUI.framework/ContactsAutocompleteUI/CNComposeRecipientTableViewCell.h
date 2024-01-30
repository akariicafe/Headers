@class NSArray, NSUUID, NSString, CNAvatarViewController, CNComposeRecipientActionButton;
@protocol CNComposeRecipientTableViewCellDelegate;

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate>

@property (retain, nonatomic) CNComposeRecipientActionButton *actionButton;
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic) unsigned long long actionType;
@property (weak) id<CNComposeRecipientTableViewCellDelegate> delegate;
@property (nonatomic) BOOL shouldHighlightCompleteMatches;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)additionalSeparatorInset;
+ (BOOL)avatarsAreHidden;
+ (id)attributedStringWithBoldedRangesForMatchedStrings:(id)a0 inString:(id)a1 font:(id)a2 boldAllMatches:(BOOL)a3;
+ (id)_attributedStringForListOfGroupMemberNames:(id)a0 numberTruncated:(unsigned long long)a1;
+ (id)_attributedStringForGroupMembersOfRecipient:(id)a0 matchedStrings:(id)a1 constrainedToWidth:(double)a2 font:(id)a3;
+ (id)_attributedTitleForRecipient:(id)a0 matchedStrings:(id)a1 constrainedToWidth:(double)a2 font:(id)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setRecipient:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)prepareForReuse;
- (void)actionButtonTapped;
- (BOOL)canExpandRecipient;
- (BOOL)canCollapseRecipient;
- (void)setActionType:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setupAvatarViewControllerWithSettings:(id)a0;
- (void)applyActionButtonTouchInsets;
- (void)updateLabelsContrainedToWidth:(double)a0;
- (id)assembleContactAvatarsForRecipient:(id)a0;
- (void)assignContactAvatarsToController:(id)a0;
- (void)updateButtonColor;
- (void)labelsChangedWidth:(double)a0;
- (double)trailingButtonWidth;
- (BOOL)supportsAvatarView;

@end
