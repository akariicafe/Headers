@class NSString;

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)migrateKey:(id)a0 fromDatabase:(id)a1;
+ (void)persistToken:(id)a0 forKey:(id)a1;
+ (id)tokenForKey:(id)a0;

- (void)migrateKey:(id)a0 fromDatabase:(id)a1;
- (void)persistToken:(id)a0 forKey:(id)a1;
- (id)tokenForKey:(id)a0;

@end
