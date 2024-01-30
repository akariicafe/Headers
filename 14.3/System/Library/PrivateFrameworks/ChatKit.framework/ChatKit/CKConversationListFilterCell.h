@class NSString, UISegmentedControl;
@protocol CKConversationListFilterDelegate;

@interface CKConversationListFilterCell : UITableViewCell <CKConversationListFilterCellCommon>

@property (retain, nonatomic) UISegmentedControl *filterControl;
@property (weak, nonatomic) id<CKConversationListFilterDelegate> filterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight:(long long)a0;
+ (long long)defaultCellStyle;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_filterCellSelectionChanged:(id)a0;
- (void)updateControl:(id)a0 selectedIndex:(unsigned long long)a1 isEnabeld:(BOOL)a2;

@end
