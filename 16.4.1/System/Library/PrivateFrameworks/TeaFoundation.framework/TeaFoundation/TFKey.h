@class NSString;

@interface TFKey : NSObject <NSCopying>

@property (readonly, nonatomic) id type;
@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(unsigned long long)a0 type:(id)a1 name:(id)a2;
- (id)copyWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressOfType:(id)a0 name:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTypeName:(id)a0 name:(id)a1;

@end
