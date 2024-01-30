@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSMutableArray *visibleButtons;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateVisibleButtons;
- (void)_hideAllButtons;
- (void)setShowsLocation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setShowsTUConversationStatus:(BOOL)a0;

@end
