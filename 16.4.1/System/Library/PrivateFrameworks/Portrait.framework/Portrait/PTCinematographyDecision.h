@class PTCinematographyTransition;

@interface PTCinematographyDecision : NSObject

@property (class, readonly, nonatomic) PTCinematographyTransition *defaultTransition;

@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) long long type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (readonly, nonatomic) PTCinematographyTransition *transition;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) long long trackIdentifier;
@property (nonatomic) long long groupIdentifier;
@property (readonly, nonatomic, getter=isUserDecision) BOOL userDecision;
@property (readonly, nonatomic, getter=isStrongDecision) BOOL strongDecision;
@property (readonly, nonatomic, getter=isGroupDecision) BOOL groupDecision;

+ (id)_decisionsWithCinematographyDictionaries:(id)a0;
+ (id)_mutableDecisionsWithCinematographyDictionaries:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (id)_decisionByChangingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_decisionByRemovingOptions:(unsigned long long)a0;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackIdentifier:(long long)a1 groupIdentifier:(long long)a2 transition:(id)a3 options:(unsigned long long)a4;
- (BOOL)hasMaximumDuration;
- (BOOL)hasMinimumDuration;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 groupIdentifier:(long long)a1 options:(unsigned long long)a2;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackIdentifier:(long long)a1;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackIdentifier:(long long)a1 options:(unsigned long long)a2;

@end
