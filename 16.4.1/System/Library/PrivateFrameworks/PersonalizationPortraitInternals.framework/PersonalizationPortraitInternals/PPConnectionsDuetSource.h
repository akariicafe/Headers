@class NSString;

@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)duetUserActivitiesFromStreams:(id)a0 limit:(unsigned long long)a1 afterDate:(id)a2 explanationSet:(id)a3;

- (id)supportedLocationFields;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 duetLimit:(long long)a4 consumer:(unsigned long long)a5 richLocationItems:(BOOL)a6 resolveEKLocations:(BOOL)a7 explanationSet:(id)a8;
- (id)identifier;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)a0 explanationSet:(id)a1;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)a0 afterDate:(id)a1 explanationSet:(id)a2;
- (id)whitespaceAndNewlineCharacterSet;
- (BOOL)isDuetEventAuthorized:(id)a0 bundleID:(id)a1;
- (BOOL)testMetadataForValidAddressAndNameWithEvent:(id)a0;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;

@end
