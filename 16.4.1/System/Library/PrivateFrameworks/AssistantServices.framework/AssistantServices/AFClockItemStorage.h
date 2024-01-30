@class NSString, NSDictionary, NSMutableDictionary, NSDate;
@protocol AFClockItemStorageDelegate;

@interface AFClockItemStorage : NSObject <AFInvalidating> {
    id<AFClockItemStorageDelegate> _delegate;
    long long _groupingDepth;
    unsigned long long _workingGeneration;
    NSDate *_workingDate;
    NSMutableDictionary *_workingItemsByID;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *itemsByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllItems;
- (void)insertOrUpdateItems:(id)a0;
- (void)endGroupingWithOptions:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (id)itemWithID:(id)a0;
- (void)deleteItemsWithIDs:(id)a0;
- (void)invalidate;
- (void)beginGrouping;
- (void).cxx_destruct;

@end
