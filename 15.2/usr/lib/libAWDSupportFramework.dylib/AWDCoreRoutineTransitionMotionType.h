@interface AWDCoreRoutineTransitionMotionType : PBCodable <NSCopying> {
    struct { unsigned char coreRoutineTransitionMotionTypeAutomotive : 1; unsigned char coreRoutineTransitionMotionTypeCycling : 1; unsigned char coreRoutineTransitionMotionTypeRunning : 1; unsigned char coreRoutineTransitionMotionTypeStationary : 1; unsigned char coreRoutineTransitionMotionTypeUnknown : 1; unsigned char coreRoutineTransitionMotionTypeWalking : 1; } _has;
}

@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeStationary;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeStationary;
@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeWalking;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeWalking;
@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeRunning;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeRunning;
@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeCycling;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeCycling;
@property (nonatomic) BOOL hasCoreRoutineTransitionMotionTypeUnknown;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeUnknown;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
