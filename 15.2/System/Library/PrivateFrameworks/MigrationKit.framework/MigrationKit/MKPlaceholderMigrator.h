@class NSObject;
@protocol OS_dispatch_queue;

@interface MKPlaceholderMigrator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;

@end
