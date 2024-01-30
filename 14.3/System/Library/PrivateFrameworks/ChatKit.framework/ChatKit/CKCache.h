@class NSString, NSMutableDictionary;

@interface CKCache : NSObject <CKCache>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;

@end
