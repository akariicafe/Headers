@class FLFollowUpController;

@interface SUSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;

+ (id)sharedController;
+ (id)stringForSUSFollowUpType:(unsigned long long)a0;

- (void)dismissAllSUFollowUps;
- (void)postFollowUpItem:(id)a0;
- (id)identifierForSUFollowUpType:(unsigned long long)a0;
- (void)postFollowUpOfType:(unsigned long long)a0 withUpdate:(id)a1;
- (BOOL)_isCurrentlyPresentingFollowUpType:(unsigned long long)a0 currentFollowUps:(id)a1;
- (void)dismissFollowUpType:(unsigned long long)a0;
- (void)dismissFollowUpTypes:(id)a0;
- (BOOL)isfollowUpSUSRelated:(id)a0;
- (void)dismissLegacyFollowUps;
- (void)dismissFollowUpWithIdentifiers:(id)a0;
- (id)identifiersForSUFollowUpTypes:(id)a0;
- (id)init;
- (void)SUSFollowUpControllerBadgeSettings:(id)a0;
- (id)getCurrentSUSFollowUpItems;
- (BOOL)isCurrentlyPresentingFollowUpTypes:(id)a0 presentationOption:(unsigned long long)a1;
- (void)SUSFollowUpControllerUnbadgeSettings;
- (void)dealloc;
- (BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
- (BOOL)isCurrentlyPresentingFollowUpType:(unsigned long long)a0;

@end
