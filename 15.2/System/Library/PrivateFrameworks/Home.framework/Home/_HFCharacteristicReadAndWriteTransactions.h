@class NSMutableOrderedSet;

@interface _HFCharacteristicReadAndWriteTransactions : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *transactionsReading;
@property (retain, nonatomic) NSMutableOrderedSet *transactionsWriting;

- (void).cxx_destruct;
- (id)init;

@end
