@class NSString;

@interface CNLabelValuePair : NSObject <NSCopying>

@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
