@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsBudgetDelegate;

@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsObject> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct vector<MSg::_RollingWindowBudgetRule, std::__1::allocator<MSg::_RollingWindowBudgetRule> > { struct _RollingWindowBudgetRule *__begin_; struct _RollingWindowBudgetRule *__end_; struct __compressed_pair<MSg::_RollingWindowBudgetRule *, std::__1::allocator<MSg::_RollingWindowBudgetRule> > { struct _RollingWindowBudgetRule *__value_; } __end_cap_; } _rules;
    NSMutableDictionary *_data;
    id<MapsSuggestionsBudgetDelegate> _delegate;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addRollingWindowOfCount:(unsigned long long)a0 perDuration:(const struct Duration { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; } x0; } *)a1 name:(id)a2;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)addRollingWindowOfCount:(unsigned long long)a0 perTimeInterval:(double)a1 name:(id)a2;
- (BOOL)hasBudgetLeft;
- (BOOL)spendAtTime:(id)a0;
- (id)q_loadStateForRuleName:(id)a0;
- (BOOL)q_saveStateForRuleName:(id)a0 state:(id)a1;
- (void)reset;
- (id).cxx_construct;
- (BOOL)spendNow;

@end
