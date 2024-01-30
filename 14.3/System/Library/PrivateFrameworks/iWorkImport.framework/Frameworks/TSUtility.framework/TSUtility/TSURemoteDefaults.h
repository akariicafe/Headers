@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)initInternal;
- (id)objectForKey:(id)a0;
- (void)registerDefaults;
- (void)processPropertyList:(id)a0;
- (id)initWithRemoteURL:(id)a0 localURL:(id)a1;

@end
