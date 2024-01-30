@class LKRecoverEMCSOperation, NSMutableArray, NSArray;

@interface LKSwitchOperation : LKOperation

@property (retain, nonatomic) NSMutableArray *mutableKeychainItemsAddedAfterRecoverEMCS;
@property (readonly, nonatomic) LKRecoverEMCSOperation *recoverEMCSOperation;
@property (readonly, nonatomic) NSArray *keychainItemsAddedAfterRecoverEMCS;
@property (readonly, nonatomic) unsigned long long switchType;

- (id)dictionary;
- (id)init;
- (void).cxx_destruct;
- (void)addKeychainItemAdditionEvent:(id)a0;
- (void)removeLastKeychainItemAdditionEvent;
- (void)setRecoverEMCSOperation:(id)a0;
- (void)setSwitchType:(unsigned long long)a0;
- (id)switchTypeString;

@end
