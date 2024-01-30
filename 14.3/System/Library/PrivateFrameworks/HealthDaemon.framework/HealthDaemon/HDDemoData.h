@class NSString, NSFileManager;

@interface HDDemoData : NSObject {
    NSString *_demoDataPath;
    NSFileManager *_fileManager;
}

+ (BOOL)shouldUseDemoDataDirectory;
+ (BOOL)willBeGeneratingDemoData;
+ (id)demoDataDirectory;

- (void).cxx_destruct;
- (id)_directoryPath;
- (id)initWithProfileType:(long long)a0;
- (BOOL)_resetDemoDataDB;

@end
