@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)removeUser:(unsigned int)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)cachedComponents;
- (id)cachedUserComponents;
- (unsigned int)stateOfComponent:(id)a0;
- (unsigned int)stateOfMasterComponent;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;

@end
