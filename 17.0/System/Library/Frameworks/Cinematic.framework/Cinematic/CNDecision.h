@class PTCinematographyDecision;

@interface CNDecision : NSObject <NSCopying>

@property (retain) PTCinematographyDecision *internalDecision;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) long long detectionID;
@property (readonly) long long detectionGroupID;
@property (readonly, getter=isUserDecision) BOOL userDecision;
@property (readonly, getter=isGroupDecision) BOOL groupDecision;
@property (readonly, getter=isStrongDecision) BOOL strongDecision;

+ (id)_copyDecisionFromInternal:(id)a0;
+ (id)_copyDecisionsFromInternal:(id)a0;
+ (id)_copyInternalFromDecisions:(id)a0;
+ (id)_takeDecisionsFromInternal:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initCopyingInternalDecision:(id)a0;
- (id)_initTakingInternalDecision:(id)a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 detectionGroupID:(long long)a1 strong:(BOOL)a2;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 detectionID:(long long)a1 strong:(BOOL)a2;

@end
