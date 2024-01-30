@class NSString, ICStoreMediaResponseItem, NSMutableDictionary, NSNumber;

@interface ATStoreInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSNumber *cloudDSID;
@property (retain, nonatomic) NSNumber *collectionID;
@property (retain, nonatomic) NSNumber *versionID;
@property (retain, nonatomic) NSNumber *drmFree;
@property (retain, nonatomic) NSNumber *sagaID;
@property (retain, nonatomic) NSNumber *subscriptionID;
@property (retain, nonatomic) NSNumber *matchStatus;
@property (retain, nonatomic) NSNumber *redownloadStatus;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *syncID;
@property (retain, nonatomic) NSString *storefrontID;
@property (retain, nonatomic) NSString *XID;
@property (retain, nonatomic) NSString *flavor;
@property (retain, nonatomic) NSString *dimensions;
@property (retain, nonatomic) NSString *podcastEpisodeGUID;
@property (retain, nonatomic) NSString *redownloadParams;
@property (retain, nonatomic) NSNumber *endpointType;
@property (retain, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem;
@property (readonly, nonatomic) NSMutableDictionary *downloadDictionary;
@property (readonly, nonatomic) NSMutableDictionary *assetDictionary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
