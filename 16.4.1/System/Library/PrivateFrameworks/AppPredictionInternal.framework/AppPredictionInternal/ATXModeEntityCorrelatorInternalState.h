@class NSCountedSet, NSMutableDictionary, NSMutableSet, ATXModeEvent, NSDate;

@interface ATXModeEntityCorrelatorInternalState : NSObject

@property (retain, nonatomic) NSCountedSet *globalEntityOccurrences;
@property (retain, nonatomic) NSCountedSet *modeLocalEntityOccurrences;
@property (retain, nonatomic) NSMutableDictionary *globalLaunchesHistogramPerEntity;
@property (retain, nonatomic) NSMutableDictionary *modeLaunchesHistogramPerEntity;
@property (retain, nonatomic) NSMutableSet *entitiesSeenForMostRecentModeEvent;
@property (retain, nonatomic) NSCountedSet *uniqueModeOccurrences;
@property (retain, nonatomic) NSMutableDictionary *entityToEntityFeaturesDict;
@property (retain, nonatomic) ATXModeEvent *mostRecentModeEvent;
@property (nonatomic) unsigned long long modeOccurrences;
@property (nonatomic) BOOL seenAtLeastOneEntityEvent;
@property (readonly, nonatomic) NSDate *today;

- (id)init;
- (void).cxx_destruct;

@end
