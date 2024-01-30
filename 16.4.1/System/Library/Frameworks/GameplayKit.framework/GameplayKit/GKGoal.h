@class GKPath, NSArray;

@interface GKGoal : NSObject <NSCopying> {
    int _type;
    GKPath *_path;
    NSArray *_obstacles;
    NSArray *_agents;
    double _time;
    float _angle;
    float _distance;
    float _speed;
    BOOL _forward;
}

+ (id)goalToAlignWithAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
+ (id)goalToAvoidAgents:(id)a0 maxPredictionTime:(double)a1;
+ (id)goalToAvoidObstacles:(id)a0 maxPredictionTime:(double)a1;
+ (id)goalToCohereWithAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
+ (id)goalToFleeAgent:(id)a0;
+ (id)goalToFollowPath:(id)a0 maxPredictionTime:(double)a1 forward:(BOOL)a2;
+ (id)goalToInterceptAgent:(id)a0 maxPredictionTime:(double)a1;
+ (id)goalToReachTargetSpeed:(float)a0;
+ (id)goalToSeekAgent:(id)a0;
+ (id)goalToSeparateFromAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
+ (id)goalToStayOnPath:(id)a0 maxPredictionTime:(double)a1;
+ (id)goalToWander:(float)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)speed;
- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)getForce:(double)a0 agent:(id)a1;
- (id)initToAlignWithAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (id)initToAvoidAgents:(id)a0 maxPredictionTime:(double)a1;
- (id)initToAvoidObstacles:(id)a0 maxPredictionTime:(double)a1;
- (id)initToCohereWithAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (id)initToFleeAgent:(id)a0;
- (id)initToFollowPath:(id)a0 maxPredictionTime:(double)a1 forward:(BOOL)a2;
- (id)initToInterceptAgent:(id)a0 maxPredictionTime:(double)a1;
- (id)initToReachTargetSpeed:(float)a0;
- (id)initToSeekAgent:(id)a0;
- (id)initToSeparateFromAgents:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (id)initToStayOnPath:(id)a0 maxPredictionTime:(double)a1;
- (id)initToWander:(float)a0;
- (BOOL)isTargetSpeedGoal;

@end
