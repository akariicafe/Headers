@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) WFContentProperty *property;

- (id)initWithProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
