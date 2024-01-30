@class BSTransaction;
@protocol SBUIAnimationControllerCoordinating;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject

@property (readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction;
@property (readonly, nonatomic) unsigned long long schedulingPolicy;

- (void).cxx_destruct;
- (id)initWithCoordinatingChildTransaction:(id)a0 schedulingPolicy:(unsigned long long)a1;

@end
