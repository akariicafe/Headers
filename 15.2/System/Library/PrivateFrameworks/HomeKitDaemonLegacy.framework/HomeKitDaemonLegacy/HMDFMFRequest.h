@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject

@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, nonatomic) FMFSession *fmfSession;
@property (readonly, nonatomic) HMFTimer *fmfSessionResponseTimer;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponseTimerDelegate:(id)a0;

@end
