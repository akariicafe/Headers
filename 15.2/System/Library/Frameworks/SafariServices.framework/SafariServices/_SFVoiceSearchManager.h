@class NSArray;

@interface _SFVoiceSearchManager : NSObject

@property (class, readonly, nonatomic) _SFVoiceSearchManager *sharedManager;

@property (readonly, nonatomic) BOOL showInstantAnswer;
@property (readonly, nonatomic) BOOL liveCompletionList;
@property (readonly, nonatomic) BOOL useSimulatedLocalHeuristics;
@property (readonly, nonatomic) NSArray *queryItems;

- (id)_kfed;
- (BOOL)_useVoiceSearchQType;
- (BOOL)presentDictationDiscoveryAlertIfNeeded;

@end
