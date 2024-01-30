@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult

@property unsigned long long dateCount;

+ (unsigned long long)category;
+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)a0 value:(id)a1 lastSendingAddress:(id)a2 dateCount:(unsigned long long)a3 date:(id)a4;
+ (id)groupResultWithDisplayName:(id)a0 dateCount:(unsigned long long)a1 date:(id)a2;

@end
