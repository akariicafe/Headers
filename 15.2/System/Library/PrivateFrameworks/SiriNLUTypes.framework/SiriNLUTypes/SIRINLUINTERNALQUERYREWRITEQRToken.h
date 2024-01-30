@class NSString;

@interface SIRINLUINTERNALQUERYREWRITEQRToken : PBCodable <NSCopying> {
    struct { unsigned char asrConfidence : 1; unsigned char endIndex : 1; unsigned char startIndex : 1; unsigned char removeSpaceAfter : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasAsrConfidence;
@property (nonatomic) double asrConfidence;
@property (readonly, nonatomic) BOOL hasPhoneSequence;
@property (retain, nonatomic) NSString *phoneSequence;
@property (nonatomic) BOOL hasRemoveSpaceAfter;
@property (nonatomic) BOOL removeSpaceAfter;

+ (id)options;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
