@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (void)_setTransaction:(id)a0;
- (id)transaction;
- (Class)classForCoder;
- (id)initWithPFBatchFaultingArray:(id)a0;

@end
