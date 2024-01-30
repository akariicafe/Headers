@class NSMutableDictionary;
@protocol JTAutoPurgeDictionaryDelegate;

@interface JTAutoPurgeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property BOOL suspendPurging;
@property (weak, nonatomic) id<JTAutoPurgeDictionaryDelegate> delegate;

- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void)removeAllObjects;
- (void)highMemoryWarning;
- (id)copyOfDictionary;

@end
