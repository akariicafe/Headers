@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {
    CorrectionsProfilesPersistedState *_persistedState;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)digest;
- (void).cxx_destruct;
- (id)description;
- (id)_path;
- (BOOL)loadLastState;
- (id)profileDataForKey:(id)a0;
- (id)correctionKeys;
- (void)saveNewState:(id)a0;

@end
