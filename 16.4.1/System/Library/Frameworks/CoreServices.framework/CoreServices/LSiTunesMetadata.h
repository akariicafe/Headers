@class NSString, NSArray;

@interface LSiTunesMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long storeItemIdentifier;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) unsigned long long versionIdentifier;
@property (readonly, nonatomic) unsigned long long betaVersionIdentifier;
@property (readonly, nonatomic) unsigned long long storeFront;
@property (readonly, nonatomic) NSString *storeCohort;
@property (readonly, nonatomic) NSString *variantID;
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) unsigned long long genreIdentifier;
@property (readonly, nonatomic) NSArray *subgenres;
@property (readonly, nonatomic) unsigned long long ratingRank;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSString *sourceApp;
@property (readonly, nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic, getter=wasGameCenterEverEnabled) BOOL gameCenterEverEnabled;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)storeCohortWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; } x6; unsigned int x7; int x8; unsigned int x9; struct LSVersionNumber { unsigned char x0[32]; } x10; struct LSVersionNumber { unsigned char x0[32]; } x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned int x36; unsigned long long x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned char x55; unsigned char x56; unsigned char x57; unsigned int x58; unsigned int x59[1]; unsigned int x60; unsigned int x61; struct LSAppClipFields { unsigned int x0; } x62; int x63; unsigned int x64; unsigned int x65; unsigned int x66; unsigned int x67; unsigned int x68; unsigned int x69; } *)a1;

@end
