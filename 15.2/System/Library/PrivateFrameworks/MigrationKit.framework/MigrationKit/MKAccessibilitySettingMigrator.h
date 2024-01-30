@class NSObject;
@protocol OS_dispatch_queue;

@interface MKAccessibilitySettingMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;

@end
