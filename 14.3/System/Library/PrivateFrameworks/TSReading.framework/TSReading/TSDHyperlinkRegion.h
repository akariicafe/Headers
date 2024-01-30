@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) TSDBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)a0 bezierPath:(id)a1;

- (void)dealloc;
- (id)initWithURL:(id)a0 bezierPath:(id)a1;

@end
