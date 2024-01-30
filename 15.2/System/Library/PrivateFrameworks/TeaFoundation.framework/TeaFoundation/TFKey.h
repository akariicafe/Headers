@class NSString;

@interface TFKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id type;

- (id)initWithAddressOfType:(id)a0 name:(id)a1;
- (id)initWithAddress:(unsigned long long)a0 type:(id)a1 name:(id)a2;
- (id)description;
- (id)copyWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTypeName:(id)a0 name:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
