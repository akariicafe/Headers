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

- (id)universalEndDate;
- (id)universalStartDate;
- (id)peopleNames;
- (id)locationPlacemarks;
- (long long)year;
- (BOOL)hasMeaningClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)meaningCluesForKey:(id)a0;
- (id)uniqueMeaningCluesForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)timeInterval;
- (unsigned long long)numberOfDays;
- (id)outputClueRelatedPlacesForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)inputClues;
- (void)prepareWithProgressBlock:(id /* block */)a0;
- (void)_mergeMeaningClue:(id)a0;
- (id)uniqueOutputClueForKey:(id)a0 andValue:(id)a1;
- (id)localDates;
- (void)enumerateTimeClues:(id /* block */)a0;
- (id)uniqueOutputCluesForKey:(id)a0;
- (id)mePerson;
- (id)peopleDescription;
- (id)meaningClues;
- (id)uniqueInputClues;
- (id)uniqueOutputClues;
- (unsigned long long)numberOfPersons;
- (id)locationRegionsInPlacemarks;
- (id)outputClueRelatedPeopleForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (void)enumerateLocationClues:(id /* block */)a0;
- (void)_mergeOutputClue:(id)a0;
- (id)description;
- (id)outputClueRelatedEventsForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputCluesForKey:(id)a0;
- (id)meaningCluesForKey:(id)a0 andValue:(id)a1;
- (unsigned long long)numberOfTimes;
- (id)uniqueMeaningClues;
- (void)enumeratePeopleClues:(id /* block */)a0;
- (id)outputClues;
- (void)mergeClues:(id)a0;
- (id)locationRegions;
- (void)enumerateTimeOfDayClues:(id /* block */)a0;
- (id)localEndDate;
- (void)_mergeInputClue:(id)a0;
- (BOOL)hasMeaningClueWithKey:(id)a0 andValue:(id)a1;
- (id)inputCluesForKey:(id)a0;
- (id)uniqueMeaningClueForKey:(id)a0 andValue:(id)a1;
- (id)universalDates;
- (void)_incrementVersionCount;
- (id)locations;
- (id)peopleDescriptionWithoutPeople:(id)a0;
- (unsigned long long)numberOfLocations;
- (BOOL)hasOutputClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)localStartDate;
- (BOOL)hasOutputClueWithKey:(id)a0 andValue:(id)a1;
- (id)outputCluesForKey:(id)a0 andValue:(id)a1;

@end
