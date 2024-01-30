@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) WFContentProperty *property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithProperty:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
