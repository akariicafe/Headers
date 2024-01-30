@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) TSUBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)a0 bezierPath:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 bezierPath:(id)a1;

@end
