@class NSString, NSArray;

@interface FCUIActivityBaubleGroupView : UIView <FCUIContentSizeCategoryAdjusting> {
    NSArray *_baubleViews;
}

@property (readonly, nonatomic) long long baubleGroupType;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithBaubleDescriptions:(id)a0 baubleGroupType:(long long)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;

@end
