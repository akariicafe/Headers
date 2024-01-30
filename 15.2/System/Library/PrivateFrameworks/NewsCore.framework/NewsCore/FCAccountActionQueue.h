@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject

@property (retain, nonatomic) FCPersistentDictionary *persistentDictionary;

- (id)initWithFileURL:(id)a0;
- (BOOL)readLocalDataHint;
- (BOOL)enqueueActionWithType:(long long)a0;
- (id)peekAtActionTypes;
- (BOOL)popActionTypesUpToCount:(unsigned long long)a0 setLocalDataHintIfNeeded:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
