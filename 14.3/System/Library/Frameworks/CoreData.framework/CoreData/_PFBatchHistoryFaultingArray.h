@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithPFBatchFaultingArray:(id)a0;
- (Class)classForCoder;

@end
