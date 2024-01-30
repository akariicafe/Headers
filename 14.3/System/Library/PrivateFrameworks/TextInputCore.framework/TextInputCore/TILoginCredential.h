@class NSString;

@interface TILoginCredential : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *site;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUsername:(id)a0 password:(id)a1 site:(id)a2;

@end
