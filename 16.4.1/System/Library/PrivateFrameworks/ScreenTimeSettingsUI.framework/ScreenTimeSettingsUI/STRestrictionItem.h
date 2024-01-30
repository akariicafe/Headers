@class NSString;

@interface STRestrictionItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *rmConfiguration;
@property (readonly, copy, nonatomic) NSString *payloadKey;
@property (readonly, copy, nonatomic) NSString *uiLabel;
@property (readonly, nonatomic) unsigned long long restrictionType;
@property (readonly, copy, nonatomic) id otherInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 restrictionKey:(id)a1 labelName:(id)a2 type:(unsigned long long)a3 restrictionValue:(id)a4;

@end
