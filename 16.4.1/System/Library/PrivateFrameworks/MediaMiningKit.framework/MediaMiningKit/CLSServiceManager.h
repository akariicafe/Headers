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

+ (id)sharedManagerWithURL:(id)a0;
+ (id)sharedManager;

- (id)initWithURL:(id)a0;
- (id)eventsForDates:(id)a0;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (void)invalidateMomentaryMemoryCaches;
- (unsigned long long)numberOfCloseByLocationMatches;
- (void)flushSocialServicesAtURL:(id)a0;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (unsigned long long)numberOfMatchRequests;
- (id)personForPersonHandle:(id)a0;
- (unsigned long long)numberOfRemoteLocationMatches;
- (unsigned long long)numberOfTimeMatches;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)shutdownForPhotoLibraryURL:(id)a0;
- (id)fetchImportantLocationsOfInterest;
- (double)pinningVisitsRatio;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)personForIdentifier:(id)a0;
- (BOOL)hasAddressesForMePerson;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)contactHistoryCollector;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (BOOL)canAccessContactsStore;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)routineIsAvailable;
- (id)eventsForClueCollection:(id)a0;
- (unsigned long long)numberOfVisits;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (id)init;
- (void)invalidatePermanentMemoryCaches;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)lastLocationOfInterestVisit;
- (id)contactsForIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)postProcessLocationsOfInterest;
- (unsigned long long)numberOfLocationsOfInterest;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0 usingPersonsModel:(id)a1;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)coreDuetPersonSuggestionsOnDate:(id)a0;
- (id)matchingDictionaryForContactIdentifier:(id)a0;

@end
