@class NSString, HDCodableWorkoutConfiguration;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL hasWorkoutConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration;

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
