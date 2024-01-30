@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {
    struct { unsigned char cloudID : 1; unsigned char delegateInfoID : 1; unsigned char purchaseHistoryID : 1; unsigned char storeAdamID : 1; unsigned char storeSubscriptionAdamID : 1; } _has;
}

@property (nonatomic) BOOL hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (readonly, nonatomic) BOOL hasContentItemID;
@property (retain, nonatomic) NSString *contentItemID;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) BOOL hasStoreSubscriptionAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) BOOL hasCloudID;
@property (nonatomic) long long cloudID;
@property (nonatomic) BOOL hasPurchaseHistoryID;
@property (nonatomic) long long purchaseHistoryID;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
