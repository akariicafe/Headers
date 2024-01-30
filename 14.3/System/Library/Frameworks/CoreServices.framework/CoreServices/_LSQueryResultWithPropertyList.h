@interface _LSQueryResultWithPropertyList : _LSQueryResult

@property (readonly, retain, nonatomic) id propertyList;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertyListWithClass:(Class)a0;
- (id)propertyListWithClass:(Class)a0 valuesOfClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;

@end
