@class NSString;

@interface CKVSearchField : NSObject <NSCopying>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToField:(id)a0;
- (id)initWithType:(long long)a0 text:(id)a1;

@end
