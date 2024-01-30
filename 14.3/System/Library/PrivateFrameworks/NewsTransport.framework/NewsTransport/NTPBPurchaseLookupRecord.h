@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSMutableArray *channelTagIDs;
@property (retain, nonatomic) NSMutableArray *bundleChannelTagIDs;
@property (readonly, nonatomic) BOOL hasBundleChannelTagIDsVersion;
@property (retain, nonatomic) NSString *bundleChannelTagIDsVersion;

+ (Class)bundleChannelTagIDsType;
+ (Class)channelTagIDsType;

- (void)clearBundleChannelTagIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addChannelTagIDs:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearChannelTagIDs;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;
- (void)addBundleChannelTagIDs:(id)a0;
- (unsigned long long)channelTagIDsCount;
- (unsigned long long)bundleChannelTagIDsCount;

@end
