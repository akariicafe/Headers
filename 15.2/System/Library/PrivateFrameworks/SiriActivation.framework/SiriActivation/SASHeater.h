@class NSTimer;
@protocol SASHeaterDelegate;

@interface SASHeater : NSObject

@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime;
@property (nonatomic) BOOL predictedRecordRouteIsZLL;
@property (retain, nonatomic) NSTimer *preheatTimer;
@property (weak, nonatomic) id<SASHeaterDelegate> delegate;

- (void)prepareForUseAfterTimeInterval:(double)a0;
- (void)_suggestPreheat;
- (void)_cancelPreparation;
- (void)cancelPreparation;
- (void).cxx_destruct;
- (void)updatePredictedRouteIsZLL;

@end
