@class NSObject;
@protocol OS_dispatch_queue;

@interface MKDisplaySettingMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;

@end
