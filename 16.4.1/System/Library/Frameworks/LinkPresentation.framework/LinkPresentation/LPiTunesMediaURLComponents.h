@class NSString;

@interface LPiTunesMediaURLComponents : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *storefrontCountryCode;

+ (id)identifierFromQueryItems:(id)a0 pathComponent:(id)a1;
+ (id)storefrontCountryCodeFromPathComponent:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
