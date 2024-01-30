@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _timeIntervals;
    struct { unsigned char thumbnailsHeight : 1; unsigned char thumbnailsWidth : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long timeIntervalsCount;
@property (readonly, nonatomic) double *timeIntervals;
@property (nonatomic) BOOL hasThumbnailsWidth;
@property (nonatomic) float thumbnailsWidth;
@property (nonatomic) BOOL hasThumbnailsHeight;
@property (nonatomic) float thumbnailsHeight;

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
- (void)addTimeIntervals:(double)a0;
- (void)clearTimeIntervals;
- (void)setTimeIntervals:(double *)a0 count:(unsigned long long)a1;
- (double)timeIntervalsAtIndex:(unsigned long long)a0;

@end
