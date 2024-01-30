@class HMUserActionPredictionProvider, NSUUID, _HMContext, NSString;
@protocol HMUserActionPredictionControllerDelegate;

@interface HMUserActionPredictionController : NSObject <HMUserActionPredictionSubscriber, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMUserActionPredictionProvider *predictionProvider;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (retain) _HMContext *context;
@property (weak) id<HMUserActionPredictionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)predictions;
- (void).cxx_destruct;
- (void)fetchPredictionsWithCompletion:(id /* block */)a0;
- (void)configureWithContext:(id)a0;
- (void)didUpdatePredictions:(id)a0 forHomeWithIdentifier:(id)a1;
- (id)initWithHomeIdentifier:(id)a0 predictionProvider:(id)a1;

@end
