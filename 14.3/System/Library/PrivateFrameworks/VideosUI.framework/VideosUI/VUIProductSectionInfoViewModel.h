@class NSArray, VUIProductMetadataLayout, UIView;

@interface VUIProductSectionInfoViewModel : NSObject

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataViews;
@property (retain, nonatomic) VUIProductMetadataLayout *layout;

+ (id)headerViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)headerViewWithImage:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)dataLabelViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)dataDescriptionViewWithString:(id)a0 maxLine:(unsigned long long)a1 layout:(id)a2 existingView:(id)a3;

- (void).cxx_destruct;

@end
