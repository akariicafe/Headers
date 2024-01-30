@class NSString, NSArray, UIView;

@interface _TVInfoListInfo : NSObject

@property (copy, nonatomic) NSString *group;
@property (nonatomic) double width;
@property (nonatomic) double lineSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerPadding;
@property (retain, nonatomic) UIView *headerContentView;
@property (copy, nonatomic) NSArray *dataViews;

- (void).cxx_destruct;

@end
