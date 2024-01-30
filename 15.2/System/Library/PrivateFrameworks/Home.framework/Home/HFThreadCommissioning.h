@class NSString, NSNumber, HMHome;
@protocol HMFCancellable;

@interface HFThreadCommissioning : NSObject

@property (readonly, nonatomic) NSString *setupCode;
@property (readonly, nonatomic) NSNumber *threadIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HMFCancellable> cancellationToken;

- (id)start;
- (void).cxx_destruct;
- (id)initWithSetupCode:(id)a0 threadIdentifier:(id)a1 home:(id)a2;

@end
