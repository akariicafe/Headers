@class NSMutableArray, NSMutableDictionary;

@interface HFMediaAccessoryUtility : NSObject

@property (retain) NSMutableArray *uuidTrackingList;
@property (retain) NSMutableDictionary *restartStateList;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)markUUIDReachableViaRapport:(id)a0;
- (void)markUUIDUnreachableViaRapport:(id)a0;
- (void)updateHomePodAccessoryRestartState:(unsigned long long)a0 with:(id)a1;
- (BOOL)checkIfAccessoryisPartofHomeAndHasLanguageSettings:(id)a0;
- (BOOL)checkIfLanguageSetupIsDoneForAccessory:(id)a0;
- (BOOL)isHomePodRestartInitiated:(id)a0;
- (BOOL)isHomePodRestartingCurrently:(id)a0;

@end
