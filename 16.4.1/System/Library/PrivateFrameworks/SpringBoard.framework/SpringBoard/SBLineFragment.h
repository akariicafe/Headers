@interface SBLineFragment : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) double lineWidth;

+ (id)fragmentWithIndex:(unsigned long long)a0 length:(unsigned long long)a1 lineWidth:(double)a2;

- (id)description;

@end
