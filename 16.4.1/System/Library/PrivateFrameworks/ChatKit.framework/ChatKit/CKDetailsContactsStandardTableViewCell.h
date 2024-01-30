@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSMutableArray *visibleButtons;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_hideAllButtons;
- (void)_updateVisibleButtons;
- (void)setShowsLocation:(BOOL)a0;
- (void)setShowsTUConversationStatus:(BOOL)a0;

@end
