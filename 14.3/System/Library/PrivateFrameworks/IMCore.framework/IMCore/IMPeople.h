@class NSArray, NSMutableArray;

@interface IMPeople : NSObject {
    NSMutableArray *_people;
    int _coalesceCount;
}

@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *people;
@property (nonatomic, setter=setShouldHidePeople:) BOOL hidePeople;
@property (readonly, nonatomic) BOOL coalescingChanges;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeNotificationObserver:(id)a0;
- (void)beginCoalescedChanges;
- (void).cxx_destruct;
- (BOOL)addIMHandle:(id)a0;
- (BOOL)removePeopleFromArray:(id)a0;
- (void)dealloc;
- (void)addNotificationObserver:(id)a0 selector:(SEL)a1;
- (void)addedIMHandle:(id)a0;
- (void)removedIMHandle:(id)a0;
- (void)imHandle:(id)a0 buddyStatusChanged:(BOOL)a1;
- (BOOL)addPeopleFromArray:(id)a0;
- (BOOL)removeIMHandle:(id)a0;
- (BOOL)containsIMHandle:(id)a0;
- (void)endCoalescedChanges;
- (void)_addedPeople:(id)a0;
- (BOOL)addPeopleFromArray:(id)a0 skipMe:(BOOL)a1;

@end
