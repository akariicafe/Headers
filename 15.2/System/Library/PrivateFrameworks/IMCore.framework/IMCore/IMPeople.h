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

- (BOOL)addPeopleFromArray:(id)a0;
- (BOOL)containsIMHandle:(id)a0;
- (void)imHandle:(id)a0 buddyStatusChanged:(BOOL)a1;
- (void)endCoalescedChanges;
- (BOOL)addPeopleFromArray:(id)a0 skipMe:(BOOL)a1;
- (BOOL)removeIMHandle:(id)a0;
- (void)addNotificationObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)_addedPeople:(id)a0;
- (BOOL)addIMHandle:(id)a0;
- (void)removedIMHandle:(id)a0;
- (void)addedIMHandle:(id)a0;
- (BOOL)removePeopleFromArray:(id)a0;
- (void)dealloc;
- (void)removeNotificationObserver:(id)a0;
- (void)beginCoalescedChanges;

@end
