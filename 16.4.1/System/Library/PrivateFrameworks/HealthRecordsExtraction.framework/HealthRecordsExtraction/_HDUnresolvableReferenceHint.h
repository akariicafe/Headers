@class NSString;

@interface _HDUnresolvableReferenceHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *reference;
@property (readonly, nonatomic) unsigned long long hint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0 hint:(unsigned long long)a1;

@end
