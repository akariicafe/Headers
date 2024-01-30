@class BSTransaction;
@protocol SBUIAnimationControllerCoordinating;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject

@property (readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction;
@property (readonly, nonatomic) unsigned long long schedulingPolicy;

- (id)initWithCoordinatingChildTransaction:(id)a0 schedulingPolicy:(unsigned long long)a1;
- (void).cxx_destruct;

@end
