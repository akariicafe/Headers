@class NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long photoNumber;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) BOOL isDeletable;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL hasComments;

+ (id)assetCollectionWithAssetCollection:(id)a0;
+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isVideo;
- (BOOL)isAutoloopVideo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isPhotoIris;
- (BOOL)isEqual:(id)a0;
- (id)mediaAssetType;
- (void)encodeWithCoder:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (id)initWithFileName:(id)a0 path:(id)a1;
- (BOOL)hasVideoAsset;
- (id)MSASPProtocolDictionary;

@end
