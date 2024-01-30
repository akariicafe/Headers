@protocol TSDHint;

@interface TNHintCacheEntry : NSObject

@property (retain) id<TSDHint> hint;
@property (getter=isValid) BOOL valid;
@property struct CGPoint { double x; double y; } origin;

- (void)dealloc;
- (id)initWithHint:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1;

@end
