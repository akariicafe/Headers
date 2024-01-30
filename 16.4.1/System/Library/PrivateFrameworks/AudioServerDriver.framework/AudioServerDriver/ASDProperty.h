@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying>

@property (readonly, nonatomic) ASDPropertyAddress *address;
@property (retain, nonatomic) id value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 value:(id)a1;

@end
