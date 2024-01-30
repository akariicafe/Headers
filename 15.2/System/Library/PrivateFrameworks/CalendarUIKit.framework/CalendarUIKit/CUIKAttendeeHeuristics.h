@interface CUIKAttendeeHeuristics : NSObject

+ (id)sortedHumanAttendeesForEvent:(id)a0 includeResources:(BOOL)a1 includeMe:(BOOL)a2;
+ (id)_participantRoleSortPriority;
+ (id)_participantStatusSortPriority;
+ (id)sortedHumanAttendeesToDisplayForEvent:(id)a0 options:(unsigned long long)a1;

@end
