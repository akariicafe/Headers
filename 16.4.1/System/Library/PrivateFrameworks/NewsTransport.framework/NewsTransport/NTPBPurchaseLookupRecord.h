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

- (void)addBundleChannelTagIDs:(id)a0;
- (void)clearBundleChannelTagIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)bundleChannelTagIDsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)channelTagIDsCount;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addChannelTagIDs:(id)a0;
- (unsigned long long)hash;
- (void)clearChannelTagIDs;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;

@end
