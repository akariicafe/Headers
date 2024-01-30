@class NSTimer;
@protocol SASHeaterDelegate;

@interface SASHeater : NSObject

@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime;
@property (nonatomic) BOOL predictedRecordRouteIsZLL;
@property (retain, nonatomic) NSTimer *preheatTimer;
@property (weak, nonatomic) id<SASHeaterDelegate> delegate;

- (void).cxx_destruct;
- (void)_cancelPreparation;
- (void)_suggestPreheat;
- (void)updatePredictedRouteIsZLL;
- (void)prepareForUseAfterTimeInterval:(double)a0;
- (void)cancelPreparation;

@end
