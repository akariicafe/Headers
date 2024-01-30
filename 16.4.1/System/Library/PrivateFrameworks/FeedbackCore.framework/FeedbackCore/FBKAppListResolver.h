@class NSArray;

@interface FBKAppListResolver : NSObject <FBKChoiceSetResolverProtocol>

@property (retain, nonatomic) NSArray *prefetchedChoices;
@property (nonatomic) BOOL didFetch;

+ (id)displayValueForChoiceValue:(id)a0;

- (void).cxx_destruct;
- (id)choices;
- (void)prefetchChoices;
- (id)initWithServerSideChoices:(id)a0;

@end
