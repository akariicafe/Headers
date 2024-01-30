@class NSString, NSURL, NSArray;

@interface GEOAppStoreApp : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSURL *appStoreURL;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iOSBundleIdentifier;
@property (retain, nonatomic) NSURL *artworkURL;
@property (nonatomic) int ratingsCount;
@property (nonatomic) float ratingsValue;
@property (readonly, nonatomic) NSArray *transitModes;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 appStoreURL:(id)a2 subtitle:(id)a3 iOSBundleIdentifier:(id)a4 artworkURL:(id)a5 ratingsCount:(int)a6 ratingsValue:(float)a7 transitModes:(id)a8;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseDictionary:(id)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2;
- (BOOL)isAppInstalled;
- (void)encodeWithCoder:(id)a0;

@end
