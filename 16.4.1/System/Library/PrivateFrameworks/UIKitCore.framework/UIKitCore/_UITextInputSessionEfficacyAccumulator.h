@class NSString, NSMutableArray;

@interface _UITextInputSessionEfficacyAccumulator : NSObject {
    long long _netCharacters[8];
    long long _userRemovedCharacters[8];
    long long _netEmojiCharacters[8];
    long long _userRemovedEmojiCharacters[8];
    long long _inputActions[8];
    NSMutableArray *_entries;
    NSString *_language;
    NSString *_region;
    NSString *_keyboardVariant;
    NSString *_keyboardLayout;
    NSString *_keyboardType;
    BOOL _sessionIsModeless;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)getOrInitializeArrayFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;
+ (id)accumulatorWithName:(id)a0;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;

- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (id)computeSessionModalitiesString;
- (void)enumerateAnalytics:(id /* block */)a0;
- (void)increaseWithAction:(id)a0;
- (void)increaseCountForSource:(long long)a0 forActionType:(long long)a1 forFlagOptions:(long long)a2 forInputModeKey:(id)a3 byAccumulatorEntry:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
