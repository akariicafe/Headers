@class CLSSocialServiceCoreNameParser, NSString, NSURL, CLSLRUMemoryCache, CLSSocialServiceCoreDuet, CLSSocialServiceCalendar, CLSPersonIdentity, NSObject, NSDateInterval, CLSRoutineService, CLSSocialServiceContacts;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {
    CLSLRUMemoryCache *_personsCache;
}

@property (readonly, nonatomic) CLSSocialServiceContacts *contactsService;
@property (readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService;
@property (readonly, nonatomic) CLSSocialServiceCalendar *calendarService;
@property (readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService;
@property (readonly, nonatomic) NSObject *routineServiceLockObject;
@property (retain, nonatomic) CLSPersonIdentity *mePerson;
@property (readonly, nonatomic) CLSRoutineService *routineService;
@property (readonly, nonatomic) NSURL *applicationDataURL;
@property (retain, nonatomic) NSDateInterval *validDateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerWithURL:(id)a0;

- (void)invalidateMomentaryMemoryCaches;
- (BOOL)hasAddressesForMePerson;
- (id)personForPersonHandle:(id)a0;
- (id)init;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (void).cxx_destruct;
- (id)coreDuetPersonSuggestionsOnDate:(id)a0;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (id)locationOfInterestAtLocation:(id)a0;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (void)invalidatePermanentMemoryCaches;
- (unsigned long long)numberOfRemoteLocationMatches;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (double)pinningVisitsRatio;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)numberOfMatchRequests;
- (id)contactHistoryCollector;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)initWithURL:(id)a0;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (BOOL)routineIsAvailable;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(id /* block */)a0;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (id)eventsForDates:(id)a0;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (unsigned long long)numberOfLocationsOfInterest;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0 usingPersonsModel:(id)a1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (unsigned long long)numberOfTimeMatches;
- (id)lastLocationOfInterestVisit;
- (void)postProcessLocationsOfInterest;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (unsigned long long)numberOfVisits;
- (id)contactsForIdentifiers:(id)a0;
- (id)eventsForClueCollection:(id)a0;
- (BOOL)shutdownForPhotoLibraryURL:(id)a0;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (void)flushSocialServicesAtURL:(id)a0;
- (id)personForIdentifier:(id)a0;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (unsigned long long)numberOfCloseByLocationMatches;
- (id)fetchImportantLocationsOfInterest;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(id /* block */)a0;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;

@end
