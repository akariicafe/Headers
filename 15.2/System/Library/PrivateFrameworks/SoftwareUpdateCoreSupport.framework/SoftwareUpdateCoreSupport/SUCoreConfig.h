@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConfig : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, retain, nonatomic) NSString *projectName;
@property (readonly, retain, nonatomic) NSString *defaultsPath;

- (void)stateSafeSetConfig:(id)a0 forKey:(id)a1;
- (void)clearConfig;
- (BOOL)getBoolConfigForKey:(id)a0;
- (id)getStringConfigForKey:(id)a0;
- (id)initWithProjectName:(id)a0;
- (void)setConfig:(id)a0 forKey:(id)a1;
- (id)stateSafeGetConfig;
- (id)getConfig;
- (BOOL)getBoolConfigForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)description;
- (id)initWithProjectName:(id)a0 defaultsPath:(id)a1;
- (void).cxx_destruct;
- (id)getNumberConfigForKey:(id)a0;

@end
