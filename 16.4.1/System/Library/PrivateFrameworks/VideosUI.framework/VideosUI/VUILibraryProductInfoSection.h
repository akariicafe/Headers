@class NSString, NSArray, UIView;

@interface VUILibraryProductInfoSection : NSObject

@property (nonatomic) double lineSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerPadding;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerMargin;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) UIView *headerContentView;
@property (copy, nonatomic) NSArray *dataViews;

+ (id)dataViewWithString:(id)a0;
+ (id)headerViewWithString:(id)a0;

- (void).cxx_destruct;

@end
