@class NSString;
@protocol CKConversationSearchCellDelegate;

@interface CKConversationLargeTextSearchCell : CKConversationListLargeTextCell <CKConversationSearchCellProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (weak, nonatomic) id<CKConversationSearchCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)annotatedResultStringWithSearchText:(id)a0 resultText:(id)a1 primaryTextColor:(id)a2 primaryFont:(id)a3 annotatedTextColor:(id)a4 annotatedFont:(id)a5;

- (id)avatarView;
- (void)layoutSubviews;
- (void)updateUnreadIndicatorWithImage:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1;
- (BOOL)lastMessageIsTypingIndicator;

@end
