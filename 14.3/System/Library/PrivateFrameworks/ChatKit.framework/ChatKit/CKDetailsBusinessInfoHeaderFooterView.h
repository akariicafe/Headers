@class CKBusinessInfoView, NSString;

@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>

@property (retain, nonatomic) CKBusinessInfoView *businessInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
