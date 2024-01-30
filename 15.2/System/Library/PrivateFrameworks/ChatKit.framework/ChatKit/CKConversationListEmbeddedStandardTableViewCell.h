@class NSString, NSObject;
@protocol CKConversationListCellDelegate;

@interface CKConversationListEmbeddedStandardTableViewCell : CKConversationListStandardCell <CKConversationListEmbeddedTableViewCellProtocol>

@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)chevronImageView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;

@end
