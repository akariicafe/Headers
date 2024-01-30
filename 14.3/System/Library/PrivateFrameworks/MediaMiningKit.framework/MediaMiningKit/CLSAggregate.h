@class NSString;

@interface CLSAggregate : NSObject

@property (readonly, nonatomic) BOOL allowWeeklyUpdates;
@property (retain, nonatomic) NSString *primaryDomain;

+ (id)sharedCLSAggregate;

- (void)_recordMessageTracerValue:(id)a0 forKey:(id)a1;
- (id)_scalarToAddKeys;
- (void)invalidateForWeeklyUpdates;
- (id)init;
- (id)_getSubdomain:(id)a0;
- (void).cxx_destruct;
- (void)recordValue:(id)a0 forKey:(id)a1;
- (id)_keysForWeeklyReporting;
- (id)_doubleValueTypeKeys;
- (id)_messageTracerMethodConstructionHintsForKey:(id)a0;
- (void)incrementValueForKey:(id)a0;
- (void)_recordAGGDValue:(id)a0 forKey:(id)a1;
- (id)_messageTracerMethodConstructionHints;
- (id)_truncateToSignificantFigureForValue:(id)a0 numOfSignificantDigits:(int)a1;
- (id)_distributionKeys;
- (id)_aggdMethodConstructionHintsForKey:(id)a0;
- (id)_aggdMethodConstructionHints;
- (id)_registeredKeysLookupTable;
- (id)_stringValueTypeKeys;
- (id)_allRegisteredKeys;
- (id)_needsParsingKeys;

@end
