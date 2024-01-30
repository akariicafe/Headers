@class NSISEngine, UIView;

@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject {
    struct CGPoint { double x; double y; } _cachedOrigin;
}

@property (weak, nonatomic) NSISEngine *cacheEngine;
@property (nonatomic) unsigned long long variableChangeCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } origin;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, weak, nonatomic) UIView *delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
