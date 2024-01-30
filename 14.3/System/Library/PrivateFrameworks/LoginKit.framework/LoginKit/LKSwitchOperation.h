@class LKRecoverEMCSOperation, NSMutableArray, NSArray;

@interface LKSwitchOperation : LKOperation

@property (retain, nonatomic) NSMutableArray *mutableKeychainItemsAddedAfterRecoverEMCS;
@property (readonly, nonatomic) LKRecoverEMCSOperation *recoverEMCSOperation;
@property (readonly, nonatomic) NSArray *keychainItemsAddedAfterRecoverEMCS;
@property (readonly, nonatomic) unsigned long long switchType;

- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (void)setRecoverEMCSOperation:(id)a0;
- (void)setSwitchType:(unsigned long long)a0;
- (void)addKeychainItemAdditionEvent:(id)a0;
- (id)switchTypeString;
- (void)removeLastKeychainItemAdditionEvent;

@end
