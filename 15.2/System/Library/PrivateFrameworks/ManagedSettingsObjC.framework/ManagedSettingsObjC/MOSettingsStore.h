@class NSXPCConnection;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsStore : NSObject

@property (class, readonly, nonatomic) NSXPCConnection *xpcConnection;

@property (readonly, weak) id<MOSettingsReader> reader;
@property (readonly, weak) id<MOSettingsWriter> writer;

+ (id)loadSettingsAtURL:(id)a0;
+ (BOOL)saveSettings:(id)a0 toURL:(id)a1;

- (id)init;

@end
