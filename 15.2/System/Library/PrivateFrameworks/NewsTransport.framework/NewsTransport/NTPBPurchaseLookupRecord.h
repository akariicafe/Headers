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

+ (Class)channelTagIDsType;
+ (Class)bundleChannelTagIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addChannelTagIDs:(id)a0;
- (void)addBundleChannelTagIDs:(id)a0;
- (void)clearChannelTagIDs;
- (unsigned long long)channelTagIDsCount;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;
- (void)clearBundleChannelTagIDs;
- (unsigned long long)bundleChannelTagIDsCount;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;

@end
