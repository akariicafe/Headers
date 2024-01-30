@class SOSStatus;

@interface SOSKappaStatus : NSObject

@property (readonly, nonatomic) BOOL isKappaFlow;
@property (readonly, nonatomic) BOOL isKappaFlowActive;
@property (readonly, nonatomic) SOSStatus *sosStatus;
@property (nonatomic) long long sosKappaState;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSOSStatus:(id)a0;

@end
