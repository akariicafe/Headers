@interface DOCThumbnailDescriptor : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double minimumSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic, getter=isFolded) BOOL folded;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithScale:(double)a0 style:(unsigned long long)a1 isFolded:(BOOL)a2 isInteractive:(BOOL)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 style:(unsigned long long)a3 isFolded:(BOOL)a4 isInteractive:(BOOL)a5;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 style:(unsigned long long)a2 isFolded:(BOOL)a3 isInteractive:(BOOL)a4;

@end
