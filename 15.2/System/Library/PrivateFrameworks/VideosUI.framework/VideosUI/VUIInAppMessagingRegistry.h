@class NSPointerArray, NSNumber;

@interface VUIInAppMessagingRegistry : NSObject

@property (retain, nonatomic) NSPointerArray *buttonViews;
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerHasFavorites:(BOOL)a0;
- (BOOL)_hasActiveButtonsNoLock;
- (void)_notifyButtonsChanged;
- (void)_notifyButtonsChangedAction;
- (void)registerDownloadButton:(id)a0;
- (void)unRegisterDownloadButton:(id)a0;

@end
