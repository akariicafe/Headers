@class NSData, NSString, NSMutableArray;

@interface ASCodableCloudKitRelationship : PBCodable <NSCopying> {
    struct { unsigned char eventCount : 1; unsigned char supportedPhoneFeatures : 1; unsigned char supportedWatchFeatures : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasIncomingHandshakeToken;
@property (retain, nonatomic) NSString *incomingHandshakeToken;
@property (readonly, nonatomic) BOOL hasOutgoingHandshakeToken;
@property (retain, nonatomic) NSString *outgoingHandshakeToken;
@property (readonly, nonatomic) BOOL hasCloudKitAddress;
@property (retain, nonatomic) NSString *cloudKitAddress;
@property (retain, nonatomic) NSMutableArray *addresses;
@property (readonly, nonatomic) BOOL hasPreferredReachableAddress;
@property (retain, nonatomic) NSString *preferredReachableAddress;
@property (readonly, nonatomic) BOOL hasPreferredReachableService;
@property (retain, nonatomic) NSString *preferredReachableService;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasEventCount;
@property (nonatomic) long long eventCount;
@property (nonatomic) BOOL hasSupportedPhoneFeatures;
@property (nonatomic) unsigned int supportedPhoneFeatures;
@property (nonatomic) BOOL hasSupportedWatchFeatures;
@property (nonatomic) unsigned int supportedWatchFeatures;

+ (Class)eventsType;
+ (Class)addressesType;

- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearEvents;
- (id)dictionaryRepresentation;
- (void)addAddresses:(id)a0;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (id)addressesAtIndex:(unsigned long long)a0;

@end
