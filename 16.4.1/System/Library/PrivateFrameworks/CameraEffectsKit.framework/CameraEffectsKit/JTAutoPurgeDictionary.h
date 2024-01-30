@class NSMutableDictionary;
@protocol JTAutoPurgeDictionaryDelegate;

@interface JTAutoPurgeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property BOOL suspendPurging;
@property (weak, nonatomic) id<JTAutoPurgeDictionaryDelegate> delegate;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyOfDictionary;
- (void)highMemoryWarning;

@end
