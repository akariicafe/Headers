@class FLFollowUpController;

@interface SUSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;

+ (id)stringForSUSFollowUpType:(unsigned long long)a0;
+ (id)sharedController;

- (BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
- (id)getCurrentSUSFollowUpItems;
- (void)postFollowUpOfType:(unsigned long long)a0 withUpdate:(id)a1 userInfo:(id)a2;
- (void)SUSFollowUpControllerBadgeSettings:(id)a0;
- (BOOL)isfollowUpSUSRelated:(id)a0;
- (void)dismissFollowUpType:(unsigned long long)a0;
- (void)SUSFollowUpControllerUnbadgeSettings;
- (void)postFollowUpItem:(id)a0;
- (void)dismissAllSUFollowUps;
- (id)identifierForSUFollowUpType:(unsigned long long)a0;
- (id)identifiersForSUFollowUpTypes:(id)a0;
- (BOOL)isCurrentlyPresentingFollowUpTypes:(id)a0 presentationOption:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)isCurrentlyPresentingFollowUpType:(unsigned long long)a0;
- (void)dismissLegacyFollowUps;
- (id)init;
- (BOOL)_isCurrentlyPresentingFollowUpType:(unsigned long long)a0 currentFollowUps:(id)a1;
- (void)dismissFollowUpWithIdentifiers:(id)a0;
- (void)dismissFollowUpTypes:(id)a0;

@end
