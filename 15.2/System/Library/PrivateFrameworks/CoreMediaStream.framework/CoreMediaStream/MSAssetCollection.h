@class NSString, NSArray, MSAsset, NSData, NSDate;

@interface MSAssetCollection : NSObject <NSSecureCoding> {
    NSArray *_derivedAssets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetCollectionID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) MSAsset *masterAsset;
@property (readonly, weak, nonatomic) NSData *masterAssetHash;
@property (retain, nonatomic) NSArray *derivedAssets;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL wasDeleted;
@property (retain, nonatomic) NSDate *serverUploadedDate;
@property (nonatomic) long long initialFailureDate;

+ (id)collectionWithMasterAsset:(id)a0 fileName:(id)a1 derivedAssets:(id)a2;
+ (id)collectionWithMasterAsset:(id)a0 fileName:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMasterAsset:(id)a0 fileName:(id)a1 derivedAssets:(id)a2;

@end
