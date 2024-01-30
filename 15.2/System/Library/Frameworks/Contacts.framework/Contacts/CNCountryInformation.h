@class NSString;

@interface CNCountryInformation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneticName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithISOCountryCode:(id)a0 name:(id)a1 phoneticName:(id)a2;

@end
