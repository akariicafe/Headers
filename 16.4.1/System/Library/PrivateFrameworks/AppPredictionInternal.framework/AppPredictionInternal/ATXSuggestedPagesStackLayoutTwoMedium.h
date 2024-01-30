@interface ATXSuggestedPagesStackLayoutTwoMedium : NSObject <ATXSuggestedPagesStackLayout>

- (void)layOutStacks:(id)a0 numberOfColumns:(unsigned long long)a1 forPageType:(long long)a2;
- (id)makeStacksFromWidgets:(id)a0 pageType:(long long)a1 environment:(id)a2;
- (unsigned long long)maxAllowableStacksForPageType:(long long)a0;
- (unsigned long long)maxAppRowsForPageType:(long long)a0;
- (unsigned long long)minNecessaryLeafIconsForPageType:(long long)a0;

@end
