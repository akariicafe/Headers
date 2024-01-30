@class NSMutableDictionary, NSMutableArray;

@interface ICCollaborationColorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *userIDToColorsDict;
@property (retain, nonatomic) NSMutableArray *colorUsageCounts;
@property (nonatomic) unsigned long long colorUsageCountMinimum;

+ (id)participantColors;

- (id)init;
- (void).cxx_destruct;
- (id)highlightColorForUserID:(id)a0 withPercentage:(double)a1 forNote:(id)a2 darkAppearance:(BOOL)a3;
- (id)containerScopedUserRecordNameForAccount:(id)a0;
- (id)baseColorValuesForUserID:(id)a0;
- (id)participantAXDisplayNameForUserID:(id)a0 forNote:(id)a1;

@end
