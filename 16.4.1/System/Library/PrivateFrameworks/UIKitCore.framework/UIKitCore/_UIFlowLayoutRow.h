@class NSMutableArray, _UIFlowLayoutSection;

@interface _UIFlowLayoutRow : NSObject {
    BOOL _isValid;
    BOOL _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    BOOL _fixedItemSize;
    _UIFlowLayoutSection *_section;
    long long _index;
    NSMutableArray *_items;
    double _availableSpace;
    struct CGSize { double width; double height; } _rowSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rowFrame;
}

- (id)init;
- (void).cxx_destruct;

@end
