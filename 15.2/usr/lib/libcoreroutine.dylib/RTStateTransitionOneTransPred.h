@class NSUUID, RTStateTransitionOnePredEl;

@interface RTStateTransitionOneTransPred : NSObject

@property (retain, nonatomic) RTStateTransitionOnePredEl *weekly;
@property (retain, nonatomic) RTStateTransitionOnePredEl *daily;
@property (retain, nonatomic) NSUUID *stateUUID;

- (void).cxx_destruct;
- (id)init;

@end
