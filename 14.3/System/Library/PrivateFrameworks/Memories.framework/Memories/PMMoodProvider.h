@class NSArray, VEKProduction, NSString, NSMutableArray;
@protocol PMEditProviderDelegate;

@interface PMMoodProvider : NSObject <PMSliderProviderProtocol>

@property (retain, nonatomic) NSMutableArray *blueprints;
@property (retain, nonatomic) NSArray *blueprintNames;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithProduction:(id)a0;
- (id)displayNameForIndex:(unsigned long long)a0;
- (void)willBeginScrolling;
- (void)setCustomBlueprint:(id)a0;
- (id)customBlueprint;

@end
