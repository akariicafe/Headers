@interface IFSymbolImageDescriptor : NSObject <NSCopying>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;
@property (nonatomic) long long layoutDirection;

- (unsigned long long)weight;
- (id)digest;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWeight:(unsigned long long)a0;
- (void)setSize:(unsigned long long)a0;
- (id)init;
- (unsigned long long)size;

@end
