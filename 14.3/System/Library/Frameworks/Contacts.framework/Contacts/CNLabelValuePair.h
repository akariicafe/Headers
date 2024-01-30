@class NSString;

@interface CNLabelValuePair : NSObject <NSCopying>

@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
