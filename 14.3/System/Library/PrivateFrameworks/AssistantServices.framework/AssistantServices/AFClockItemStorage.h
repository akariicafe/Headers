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

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)deleteAllItems;
- (void)beginGrouping;
- (void)endGroupingWithOptions:(unsigned long long)a0;
- (id)itemWithID:(id)a0;
- (void)insertOrUpdateItems:(id)a0;
- (void)deleteItemsWithIDs:(id)a0;
- (void)invalidate;

@end
