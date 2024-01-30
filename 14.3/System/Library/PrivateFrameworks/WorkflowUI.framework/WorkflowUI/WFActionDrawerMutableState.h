@class NSString, WFActionDrawerResults, WFAction, NSIndexPath, WFActionDrawerState;

@interface WFActionDrawerMutableState : WFActionDrawerState

@property (nonatomic) long long activePane;
@property (retain, nonatomic) WFActionDrawerState *precedingState;
@property (retain, nonatomic) NSIndexPath *listPosition;
@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic, getter=isFocusedOnSearchBar) BOOL focusedOnSearchBar;
@property (retain, nonatomic) WFActionDrawerResults *listResults;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) WFAction *action;
@property (copy, nonatomic) NSString *bundleIdentifier;


@end
