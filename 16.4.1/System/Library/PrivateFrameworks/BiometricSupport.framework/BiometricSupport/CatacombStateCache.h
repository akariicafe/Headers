@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (void)removeUser:(unsigned int)a0;
- (id)cachedComponents;
- (unsigned int)stateOfMasterComponent;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)init;
- (id)cachedUserComponents;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (unsigned int)stateOfComponent:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
