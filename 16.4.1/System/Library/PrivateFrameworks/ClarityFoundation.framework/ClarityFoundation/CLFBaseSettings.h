@class NSString, NSArray, NSMutableDictionary;

@interface CLFBaseSettings : AXBaseSettings {
    NSMutableDictionary *_preferenceKeysBySelectorName;
}

@property (class, readonly, nonatomic) NSString *domainName;
@property (class, readonly, nonatomic) NSArray *allPreferenceSelectorsAsStrings;

+ (void)deleteAllKeys;

- (id)domainNameForPreferenceKey:(id)a0;
- (id)observeUpdatesForSelector:(SEL)a0 handler:(id /* block */)a1;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)registerUpdateBlock:(id /* block */)a0 withListener:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
