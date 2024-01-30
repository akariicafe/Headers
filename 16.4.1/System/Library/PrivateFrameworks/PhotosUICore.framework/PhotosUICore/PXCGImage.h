@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { } *)a0;

@end
