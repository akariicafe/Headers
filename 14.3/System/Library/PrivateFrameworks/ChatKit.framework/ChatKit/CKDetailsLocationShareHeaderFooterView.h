@class NSString, UITextView;

@interface CKDetailsLocationShareHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>

@property (retain, nonatomic) UITextView *locationSharingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
