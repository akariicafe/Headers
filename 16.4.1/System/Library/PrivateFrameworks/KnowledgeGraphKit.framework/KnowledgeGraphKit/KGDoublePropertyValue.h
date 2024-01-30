@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (id)maPropertyValue;
- (id)initWithValue:(double)a0;
- (unsigned long long)dataType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
