@class NSString, NSDictionary, NSMutableArray;
@protocol NSLayoutItem;

@interface NSLayoutConstraintParser : NSObject {
    NSString *_line;
    const char *_lineChars;
    unsigned long long _lineLength;
    unsigned long long _opts;
    BOOL _useHorizontalArrangement;
    NSDictionary *_metrics;
    NSDictionary *_views;
    id<NSLayoutItem> _containerView;
    NSMutableArray *_constraints;
    NSMutableArray *_unflushedWidthConstraints;
    NSMutableArray *_alignmentConstraints;
    unsigned long long _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    id<NSLayoutItem> _parsedLeftView;
    id<NSLayoutItem> _parsedRightView;
    id<NSLayoutItem> _parsedConstrainedWidthView;
}

+ (id)constraintsWithVisualFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 views:(id)a3;

- (void)parse;
- (id)constraints;
- (void)dealloc;
- (void)parsePredicateWithParentheses;
- (id)description;
- (void)parseOp;
- (void)failWithDescription:(id)a0;
- (double)parseConstant;
- (void)parsePredicateList;
- (void)parseConnection;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 views:(id)a3;
- (void)finishConstraint;
- (void)flushWidthConstraints;
- (id)parseView;
- (void)findContainerView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfName;
- (void)parsePredicate;

@end
