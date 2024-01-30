@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (void)removeUser:(unsigned int)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (void).cxx_destruct;
- (id)cachedComponents;
- (id)init;
- (unsigned int)stateOfMasterComponent;
- (id)cachedUserComponents;
- (unsigned int)stateOfComponent:(id)a0;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (void)reset;

@end
