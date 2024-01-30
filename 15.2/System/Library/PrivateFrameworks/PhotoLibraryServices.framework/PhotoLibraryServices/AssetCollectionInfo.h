@class NSString, NSDictionary, NSDate, NSNumber;

@interface AssetCollectionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isPhotoIris;
@property (readonly, nonatomic) unsigned short playbackVariation;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) NSDictionary *metaData;
@property (readonly, nonatomic) NSNumber *width;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *derivativeUTI;
@property (readonly, nonatomic) NSNumber *originalFilesize;
@property (readonly, nonatomic) NSString *originalFilename;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetCollection:(id)a0;

@end
