@interface IFSymbolImageDescriptor : NSObject

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;

- (unsigned long long)weight;
- (void)setWeight:(unsigned long long)a0;
- (unsigned long long)size;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSize:(unsigned long long)a0;
- (id)digest;

@end
