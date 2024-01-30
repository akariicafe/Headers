@class NSString, NSSet;

@interface _DPBlacklist : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSSet *blacklist;
@property (readonly, nonatomic) long long version;

+ (void)initialize;
+ (BOOL)blacklistExistsWithKey:(id)a0 inDirectory:(id)a1;
+ (id)blacklistForKey:(id)a0 fromConfigurationsFile:(id)a1;
+ (id)extractKeyFromFileName:(id)a0;
+ (void)removeBlackListForKey:(id)a0;
+ (id)filePathWithKey:(id)a0 inDirectory:(id)a1;
+ (void)resetAllBlacklists;
+ (id)blacklistForKey:(id)a0 systemBlacklistDirectory:(id)a1 runtimeBlacklistDirectory:(id)a2;
+ (void)removeBlackListsForKeys:(id)a0;

- (id)initWithKey:(id)a0 fromConfigurationsFile:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
