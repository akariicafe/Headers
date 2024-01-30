@class NSMutableArray;

@interface UIKBSystemLayoutViewController : UIViewController {
    NSMutableArray *_constraints;
}

@property (nonatomic) unsigned long long horizontalLayoutType;
@property (nonatomic) unsigned long long verticalLayoutType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumInsets;
@property (nonatomic) struct CGSize { double width; double height; } centeredOffsets;

+ (id)systemLayoutViewControllerWithViewController:(id)a0;

- (void)dealloc;
- (void)updateViewConstraints;

@end
