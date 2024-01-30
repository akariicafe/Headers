@class NSMapTable, CLSMeaningClue, CLSInputPeopleClue;

@interface CLSClueCollection : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _recursiveLock;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

@property (retain, nonatomic) CLSInputPeopleClue *mePersonClue;
@property (readonly) unsigned long long versionCount;
@property (readonly) CLSMeaningClue *locationMobilityClue;

- (id)localStartDate;
- (long long)year;
- (double)timeInterval;
- (id)localEndDate;
- (id)locations;
- (id)description;
- (id)peopleNames;
- (void).cxx_destruct;
- (id)init;
- (id)mePerson;
- (id)universalDates;
- (id)universalStartDate;
- (id)universalEndDate;
- (void)enumeratePeopleClues:(id /* block */)a0;
- (unsigned long long)numberOfLocations;
- (void)mergeClues:(id)a0;
- (id)outputCluesForKey:(id)a0;
- (unsigned long long)numberOfPersons;
- (id)uniqueMeaningCluesForKey:(id)a0;
- (id)meaningCluesForKey:(id)a0;
- (void)enumerateTimeClues:(id /* block */)a0;
- (void)enumerateLocationClues:(id /* block */)a0;
- (void)enumerateTimeOfDayClues:(id /* block */)a0;
- (unsigned long long)numberOfDays;
- (id)meaningClues;
- (id)outputClues;
- (id)inputClues;
- (void)prepareWithProgressBlock:(id /* block */)a0;
- (id)localDates;
- (void)_incrementVersionCount;
- (id)inputCluesForKey:(id)a0;
- (id)uniqueInputClues;
- (id)uniqueOutputCluesForKey:(id)a0;
- (id)outputCluesForKey:(id)a0 andValue:(id)a1;
- (id)uniqueOutputClueForKey:(id)a0 andValue:(id)a1;
- (id)uniqueOutputClues;
- (BOOL)hasOutputClueWithKey:(id)a0 andValue:(id)a1;
- (BOOL)hasOutputClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClueRelatedPeopleForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClueRelatedEventsForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClueRelatedPlacesForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)uniqueMeaningClues;
- (id)meaningCluesForKey:(id)a0 andValue:(id)a1;
- (id)uniqueMeaningClueForKey:(id)a0 andValue:(id)a1;
- (BOOL)hasMeaningClueWithKey:(id)a0 andValue:(id)a1;
- (BOOL)hasMeaningClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (unsigned long long)numberOfTimes;
- (id)locationPlacemarks;
- (id)locationRegions;
- (id)locationRegionsInPlacemarks;
- (void)_mergeInputClue:(id)a0;
- (void)_mergeOutputClue:(id)a0;
- (void)_mergeMeaningClue:(id)a0;
- (id)peopleDescription;
- (id)peopleDescriptionWithoutPeople:(id)a0;

@end
