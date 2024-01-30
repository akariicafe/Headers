@class NSArray, AVPlaybackRate;
@protocol AVPlaybackRateCollectionDelegate;

@interface AVPlaybackRateCollection : NSObject {
    id<AVPlaybackRateCollectionDelegate> _delegate;
    NSArray *_rates;
}

@property (readonly, nonatomic) NSArray *rates;
@property (readonly, nonatomic) AVPlaybackRate *selectedRate;

+ (id)collectionWithDefaultRates;
+ (id)collectionWithRates:(id)a0;

- (id)description;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (id)debugDescription;
- (id)_initInternalWithRates:(id)a0;
- (void)setSelectedRate:(id)a0;
- (void)selectNextPlaybackRate:(id)a0;

@end
