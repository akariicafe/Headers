@interface ATXSuggestedPagesUtils : NSObject

+ (id)semanticTypeForSuggestedPageType:(long long)a0;
+ (id)createMediumStack;
+ (id)_createStackOfSize:(unsigned long long)a0;
+ (id)createSmallStack;
+ (id)createLargeStack;
+ (id)sortWidgetsByDescendingScore:(id)a0 limit:(unsigned long long)a1;
+ (void)evenlyDistributeWidgets:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 amongStacks:(id)a2 usedPersonalities:(id)a3 maxWidgetsInStack:(unsigned long long)a4;
+ (id)filterWidgets:(id)a0 bySize:(unsigned long long)a1 usedPersonalities:(id)a2;
+ (unsigned long long)modeForSuggestedPageType:(long long)a0;

@end
