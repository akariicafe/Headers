@class NSMutableDictionary;
@protocol JTAutoPurgeDictionaryDelegate;

@interface JTAutoPurgeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property BOOL suspendPurging;
@property (weak, nonatomic) id<JTAutoPurgeDictionaryDelegate> delegate;

- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)highMemoryWarning;
- (id)copyOfDictionary;

@end
