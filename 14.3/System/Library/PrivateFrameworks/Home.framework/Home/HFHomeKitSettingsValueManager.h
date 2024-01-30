@class NSMutableDictionary, NSSet, HMSettings, HMHome;

@interface HFHomeKitSettingsValueManager : NSObject

@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) HMSettings *settings;
@property (retain, nonatomic) NSMutableDictionary *transactionStacks;
@property (readonly, nonatomic) NSSet *pendingWrites;

- (id)valueForSetting:(id)a0;
- (void).cxx_destruct;
- (id)changeValueForSetting:(id)a0 toValue:(id)a1;
- (id)valueForSettingAtKeyPath:(id)a0;
- (id)changeValueForSetting:(id)a0 toValue:(id)a1 changeType:(unsigned long long)a2;
- (id)initWithSettings:(id)a0 home:(id)a1;
- (id)_valueForSetting:(id)a0 logRead:(BOOL)a1;
- (void)_executeNextPendingWriteForSetting:(id)a0;
- (void)_clearTransaction:(id)a0;

@end
