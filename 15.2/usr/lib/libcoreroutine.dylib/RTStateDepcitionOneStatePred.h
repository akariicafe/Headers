@class NSUUID, RTStateDepictionOnePredEl;

@interface RTStateDepcitionOneStatePred : NSObject

@property (retain, nonatomic) RTStateDepictionOnePredEl *weekly;
@property (retain, nonatomic) RTStateDepictionOnePredEl *daily;
@property (retain, nonatomic) NSUUID *stateUUID;

- (void).cxx_destruct;
- (id)init;

@end
