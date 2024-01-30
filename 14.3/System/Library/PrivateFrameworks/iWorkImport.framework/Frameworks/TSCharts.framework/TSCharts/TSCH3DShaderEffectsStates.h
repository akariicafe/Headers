@class NSMutableDictionary;

@interface TSCH3DShaderEffectsStates : NSObject <NSCopying> {
    NSMutableDictionary *mObjects;
}

- (void)clear;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)setState:(id)a0 forStateInfo:(id)a1;
- (void)setValueState:(id)a0 forKey:(id)a1;
- (id)valueStateForKey:(id)a0;
- (id)stateForStateInfo:(id)a0 createIfNil:(BOOL)a1;

@end
