@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface COSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *settings;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (copy, nonatomic) id /* block */ clientCallback;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *path;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (BOOL)writeSettings;
- (BOOL)createSettingsFile;
- (BOOL)readSettings;
- (void)startMonitoringForChanges:(id /* block */)a0;
- (BOOL)startMonitoringForFileDeletion;
- (void)stopMonitoringForFileDeletion;

@end
