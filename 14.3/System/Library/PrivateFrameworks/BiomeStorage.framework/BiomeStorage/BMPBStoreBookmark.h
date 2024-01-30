@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying> {
    struct { unsigned char iterationStartTime : 1; unsigned char offset : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStreamId;
@property (retain, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BOOL hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (nonatomic) BOOL hasIterationStartTime;
@property (nonatomic) double iterationStartTime;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
