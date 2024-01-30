@class NSString;

@interface BDSICloudIdentityToken : NSObject

@property (copy, nonatomic) NSString *token;

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithToken:(id)a0;
- (id)initWithCurrentIdentity;
- (id)initFromArchive:(id)a0;
- (id)_hashFor:(id)a0;

@end
