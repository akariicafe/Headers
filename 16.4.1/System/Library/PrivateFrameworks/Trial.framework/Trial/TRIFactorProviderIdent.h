@class NSString;

@interface TRIFactorProviderIdent : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *value;

+ (id)identWithType:(unsigned char)a0 value:(id)a1;

- (id)initWithType:(unsigned char)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToIdent:(id)a0;
- (id)copyWithReplacementType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithReplacementValue:(id)a0;

@end
