@class NSString;

@interface CNCountryInformation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneticName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithISOCountryCode:(id)a0 name:(id)a1 phoneticName:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
