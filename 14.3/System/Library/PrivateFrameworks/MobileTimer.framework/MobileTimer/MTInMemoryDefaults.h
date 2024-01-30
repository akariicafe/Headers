@class NSString, NSMutableDictionary;

@interface MTInMemoryDefaults : NSObject <MTPersistence>

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 defaultValue:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;

@end
