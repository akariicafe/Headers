@class CLSSocialServiceCoreNameParser, NSString, NSURL, CLSLRUMemoryCache, CLSSocialServiceCoreDuet, CLSSocialServiceCalendar, CLSPersonIdentity, NSObject, CLSRoutineService, CLSSocialServiceContacts;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {
    CLSLRUMemoryCache *_personsCache;
}

@property (readonly, nonatomic) CLSSocialServiceContacts *contactsService;
@property (readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService;
@property (readonly, nonatomic) CLSSocialServiceCalendar *calendarService;
@property (readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService;
@property (readonly, nonatomic) NSObject *routineServiceLockObject;
@property (readonly, nonatomic) BOOL hasAccessToContactsStore;
@property (retain, nonatomic) CLSPersonIdentity *mePerson;
@property (readonly, nonatomic) NSURL *applicationDataURL;
@property (readonly, nonatomic) CLSRoutineService *routineService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerWithURL:(id)a0;

- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (BOOL)canAccessContactsStore;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)numberOfLocationsOfInterest;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)routineIsAvailable;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (void)postProcessLocationsOfInterest;
- (id)initWithURL:(id)a0;
- (id)contactsForIdentifiers:(id)a0;
- (unsigned long long)numberOfMatchRequests;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (id)personForPersonHandle:(id)a0;
- (unsigned long long)numberOfCloseByLocationMatches;
- (unsigned long long)numberOfVisits;
- (id)eventsForDates:(id)a0;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0 usingPersonsModel:(id)a1;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)fetchImportantLocationsOfInterest;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (double)pinningVisitsRatio;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (BOOL)shutdownForPhotoLibraryURL:(id)a0;
- (id)personForIdentifier:(id)a0;
- (unsigned long long)numberOfRemoteLocationMatches;
- (id)contactHistoryCollector;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasAddressesForMePerson;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)init;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)lastLocationOfInterestVisit;
- (unsigned long long)numberOfTimeMatches;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (void)flushSocialServicesAtURL:(id)a0;
- (void)invalidateMomentaryMemoryCaches;
- (id)coreDuetPersonSuggestionsOnDate:(id)a0;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)eventsForClueCollection:(id)a0;
- (void)invalidatePermanentMemoryCaches;

@end
