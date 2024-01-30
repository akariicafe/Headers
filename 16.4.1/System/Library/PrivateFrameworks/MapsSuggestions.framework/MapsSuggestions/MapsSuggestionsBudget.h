@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsBudgetDelegate;

@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsObject, MapsSuggestionsCondition> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct vector<MSg::_RollingWindowBudgetRule, std::allocator<MSg::_RollingWindowBudgetRule>> { struct _RollingWindowBudgetRule *__begin_; struct _RollingWindowBudgetRule *__end_; struct __compressed_pair<MSg::_RollingWindowBudgetRule *, std::allocator<MSg::_RollingWindowBudgetRule>> { struct _RollingWindowBudgetRule *__value_; } __end_cap_; } _rules;
    NSMutableDictionary *_data;
    id<MapsSuggestionsBudgetDelegate> _delegate;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)objectForJSON;
- (id)nameForJSON;
- (BOOL)isTrue;
- (id)q_loadStateForRuleName:(id)a0;
- (BOOL)spendAtTime:(id)a0;
- (BOOL)q_saveStateForRuleName:(id)a0 state:(id)a1;
- (BOOL)hasBudgetLeft;
- (void)addRollingWindowOfCount:(unsigned long long)a0 perDuration:(const void *)a1 name:(id)a2;
- (BOOL)spendNow;
- (void).cxx_destruct;
- (void)addRollingWindowOfCount:(unsigned long long)a0 perTimeInterval:(double)a1 name:(id)a2;
- (void)reset;

@end
