@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {
    CorrectionsProfilesPersistedState *_persistedState;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)digest;
- (id)description;
- (void).cxx_destruct;
- (id)_path;
- (id)correctionKeys;
- (BOOL)loadLastState;
- (id)profileDataForKey:(id)a0;
- (void)saveNewState:(id)a0;

@end
