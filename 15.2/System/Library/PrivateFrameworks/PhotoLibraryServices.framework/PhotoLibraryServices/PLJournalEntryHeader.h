@class NSData, NSString, NSMutableArray;

@interface PLJournalEntryHeader : PBCodable <NSCopying> {
    struct { unsigned char payloadLength : 1; unsigned char entryType : 1; unsigned char payloadCRC : 1; unsigned char payloadVersion : 1; } _has;
}

@property (nonatomic) BOOL hasEntryType;
@property (nonatomic) int entryType;
@property (readonly, nonatomic) BOOL hasPayloadUUID;
@property (retain, nonatomic) NSData *payloadUUID;
@property (readonly, nonatomic) BOOL hasPayloadID;
@property (retain, nonatomic) NSString *payloadID;
@property (nonatomic) BOOL hasPayloadVersion;
@property (nonatomic) unsigned int payloadVersion;
@property (nonatomic) BOOL hasPayloadLength;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL hasPayloadCRC;
@property (nonatomic) unsigned int payloadCRC;
@property (retain, nonatomic) NSMutableArray *nilProperties;

+ (Class)nilPropertiesType;

- (void)clearNilProperties;
- (unsigned long long)nilPropertiesCount;
- (id)nilPropertiesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addNilProperties:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsEntryType:(id)a0;
- (id)entryTypeAsString:(int)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
