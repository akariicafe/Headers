@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) FMFSession *fmfSession;
@property (readonly, nonatomic) HMFTimer *fmfSessionResponseTimer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponseTimerDelegate:(id)a0;

@end
