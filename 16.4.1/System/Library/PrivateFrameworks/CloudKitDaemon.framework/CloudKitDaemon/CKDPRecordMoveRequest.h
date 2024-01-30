@class NSString, CKDPRecordIdentifier, CKDPRecord;

@interface CKDPRecordMoveRequest : PBRequest <NSCopying> {
    struct { unsigned char semantics : 1; unsigned char merge : 1; } _has;
}

@property (nonatomic) BOOL hasSemantics;
@property (nonatomic) int semantics;
@property (readonly, nonatomic) BOOL hasOriginId;
@property (retain, nonatomic) CKDPRecordIdentifier *originId;
@property (readonly, nonatomic) BOOL hasOriginEtag;
@property (retain, nonatomic) NSString *originEtag;
@property (readonly, nonatomic) BOOL hasDestinationEtag;
@property (retain, nonatomic) NSString *destinationEtag;
@property (readonly, nonatomic) BOOL hasDestinationZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *destinationZoneProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasDestinationRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *destinationRecordProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasDestinationRecord;
@property (retain, nonatomic) CKDPRecord *destinationRecord;
@property (nonatomic) BOOL hasMerge;
@property (nonatomic) BOOL merge;

+ (id)options;

- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsSemantics:(id)a0;
- (id)semanticsAsString:(int)a0;

@end
