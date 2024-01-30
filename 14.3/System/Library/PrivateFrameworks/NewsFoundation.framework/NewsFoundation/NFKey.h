@class NSString;

@interface NFKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id type;

- (void).cxx_destruct;
- (id)initWithTypeName:(id)a0 name:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithName:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)a0 type:(id)a1 name:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressOfType:(id)a0 name:(id)a1;

@end
