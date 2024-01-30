@class NSArray, VEKProduction, NSString;
@protocol PMEditProviderDelegate;

@interface PMDurationProvider : NSObject <PMSliderProviderProtocol>

@property (retain, nonatomic) NSArray *localizedDurations;
@property (nonatomic) double currentDuration;
@property (nonatomic) double maxDuration;
@property (nonatomic) double customDuration;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)updateWithResult:(id)a0;
- (void)setCustomDuration:(double)a0 andEdit:(BOOL)a1;
- (id)initWithProduction:(id)a0;
- (id)displayNameForIndex:(unsigned long long)a0;
- (void)willBeginScrolling;
- (void)updateLocalizedNames;

@end
