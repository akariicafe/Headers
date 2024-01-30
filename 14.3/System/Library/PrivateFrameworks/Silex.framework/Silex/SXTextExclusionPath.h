@class NSString, SXTextExclusionPathWrapper;

@interface SXTextExclusionPath : NSObject {
    BOOL _fullBleed;
    int _type;
    int _lineVerticalAlignment;
    double _padding;
    double _verticalAlignmentFactor;
    NSString *_componentIdentifier;
    id /* block */ _startBlock;
    id /* block */ _minYBlock;
    id /* block */ _completionBlock;
    SXTextExclusionPathWrapper *_wrapper;
    struct CGPoint { double x; double y; } _actualPosition;
    struct CGPoint { double x; double y; } _position;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _exclusionRect;
}

- (void).cxx_destruct;
- (id)description;

@end
