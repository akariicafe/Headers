@class NSString, NSUUID, NSXPCConnection;

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)new;

- (id)valueForSetting:(id)a0 inGroup:(id)a1;
- (id)initWithName:(id)a0;
- (id)reader;
- (id)writer;
- (id)init;
- (void).cxx_destruct;
- (void)clearAllSettings;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (id)initWithSharedContainer:(id)a0;
- (void)removeValueForSetting:(id)a0 inGroup:(id)a1;
- (void)setValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;

@end
