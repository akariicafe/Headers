@class NSString;

@interface CSOCRTextLine : NSObject {
    NSString *_strings[3];
    double _scores[3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textBounds;
    long long _count;
    BOOL _isTitle;
}

- (id)description;
- (void).cxx_destruct;
- (void)appendToString:(id)a0;
- (void)addCandidate:(id)a0 confidence:(double)a1;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTitle:(BOOL)a1;

@end
