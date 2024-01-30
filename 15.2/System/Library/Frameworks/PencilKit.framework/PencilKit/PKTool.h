@class PKInk;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKInk *ink;

+ (id)_toolWithInk:(id)a0;
+ (BOOL)_inkIsInkingTool:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
- (id)_initWithInk:(id)a0;
- (id)initWithType:(id)a0 color:(id)a1 weight:(double)a2;

@end
