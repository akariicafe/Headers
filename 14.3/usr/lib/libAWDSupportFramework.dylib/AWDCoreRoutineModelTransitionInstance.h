@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {
    struct { unsigned char distance : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) unsigned int distance;
@property (readonly, nonatomic) BOOL hasTransitionHistogram;
@property (retain, nonatomic) AWDCoreRoutineTransitionMotionType *transitionHistogram;

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
