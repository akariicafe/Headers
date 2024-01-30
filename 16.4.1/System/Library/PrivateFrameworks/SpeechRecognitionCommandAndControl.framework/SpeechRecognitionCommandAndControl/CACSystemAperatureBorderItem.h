@class NSString;

@interface CACSystemAperatureBorderItem : NSObject <AXElementNamesItem> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementFrame;
@property (readonly, nonatomic) BOOL isSpacer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } elementLabelContainerSize;

+ (id)borderItemsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 minimumRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
