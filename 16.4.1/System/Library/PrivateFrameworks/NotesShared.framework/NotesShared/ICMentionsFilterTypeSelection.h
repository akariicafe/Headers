@class NSString;

@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (readonly, nonatomic) NSString *currentUserID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)shortEmptySummary;
- (id)summaryWithJoinOperatorMenu;

@end
