@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (id)maPropertyValue;
- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)dataType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
