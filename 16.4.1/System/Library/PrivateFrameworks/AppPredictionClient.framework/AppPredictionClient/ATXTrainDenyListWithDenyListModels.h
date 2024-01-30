@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXTrainDenyListWithDenyListModels : NSObject {
    NSDictionary *_trainDenyListWithDenyListModels;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)trainAppDenyListWithDenyListModel;
- (BOOL)trainContactDenyListWithDenyListModel;

@end
