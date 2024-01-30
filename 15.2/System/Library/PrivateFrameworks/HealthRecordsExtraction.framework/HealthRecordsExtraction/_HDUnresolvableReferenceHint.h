@class NSString;

@interface _HDUnresolvableReferenceHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *reference;
@property (readonly, nonatomic) unsigned long long hint;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithReference:(id)a0 hint:(unsigned long long)a1;

@end
