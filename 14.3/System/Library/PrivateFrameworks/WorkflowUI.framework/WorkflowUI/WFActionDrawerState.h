@class NSString, WFActionDrawerResults, WFAction, NSIndexPath;

@interface WFActionDrawerState : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long activePane;
@property (retain, nonatomic) WFActionDrawerState *precedingState;
@property (retain, nonatomic) NSIndexPath *listPosition;
@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic, getter=isFocusedOnSearchBar) BOOL focusedOnSearchBar;
@property (retain, nonatomic) WFActionDrawerResults *listResults;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) WFAction *action;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (id)concatStates:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0 class:(Class)a1;
- (id)stateChain;
- (id)stateByAddingState:(id)a0;

@end
