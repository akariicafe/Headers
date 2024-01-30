@class NSString, NSUserDefaults;

@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {
    NSUserDefaults *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_keyRefForRequest:(id)a0;
- (long long)fetchAccessForRequest:(id)a0;
- (void)storeAccess:(long long)a0 forRequest:(id)a1;
- (void)clearAllAccessRecords;

@end
