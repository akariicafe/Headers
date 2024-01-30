@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (id)maPropertyValue;
- (id)initWithValue:(long long)a0;
- (unsigned long long)dataType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
