@class NSPointerArray, NSNumber, NSString;

@interface VUIInAppMessagingRegistry : NSObject {
    NSString *activeButtonDidChangeNotificationName;
    NSString *hasFavoriteTeamsDidChangeNotificationName;
}

@property (retain, nonatomic) NSPointerArray *buttonViews;
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasActiveButtonsNoLock;
- (void)_notifyButtonsChanged;
- (void)_notifyButtonsChangedAction;
- (void)postNotificationFavoriteTeamsDidChange;
- (void)register:(long long)a0;
- (void)registerDownloadButton:(id)a0;
- (void)unRegisterDownloadButton:(id)a0;

@end
