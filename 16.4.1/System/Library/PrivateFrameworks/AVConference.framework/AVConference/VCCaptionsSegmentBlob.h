@class NSString;

@interface VCCaptionsSegmentBlob : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char hasSpaceAfter : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasHasSpaceAfter;
@property (nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithSFTranscriptionSegment:(id)a0 isLast:(BOOL)a1;

@end
