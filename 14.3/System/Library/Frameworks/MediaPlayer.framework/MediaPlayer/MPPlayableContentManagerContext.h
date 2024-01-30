@interface MPPlayableContentManagerContext : NSObject

@property (nonatomic) long long enforcedContentItemsCount;
@property (nonatomic) long long enforcedContentTreeDepth;
@property (nonatomic) BOOL contentLimitsEnforced;
@property (nonatomic) BOOL endpointAvailable;
@property (readonly, nonatomic) BOOL contentLimitsEnabled;

@end
