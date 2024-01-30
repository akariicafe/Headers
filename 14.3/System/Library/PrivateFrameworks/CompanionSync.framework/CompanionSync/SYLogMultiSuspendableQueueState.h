@class NSString;

@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying> {
    struct { unsigned char resumeCount : 1; } _has;
}

@property (nonatomic) BOOL hasResumeCount;
@property (nonatomic) int resumeCount;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasTarget;
@property (retain, nonatomic) NSString *target;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
