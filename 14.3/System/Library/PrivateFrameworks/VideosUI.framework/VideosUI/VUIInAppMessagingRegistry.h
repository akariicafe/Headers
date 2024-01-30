@class NSPointerArray, NSNumber;

@interface VUIInAppMessagingRegistry : NSObject

@property (retain, nonatomic) NSPointerArray *buttonViews;
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerDownloadButton:(id)a0;
- (void)unRegisterDownloadButton:(id)a0;
- (void)registerHasFavorites:(BOOL)a0;
- (BOOL)_hasActiveButtonsNoLock;
- (void)_notifyButtonsChanged;
- (void)_notifyButtonsChangedAction;

@end
