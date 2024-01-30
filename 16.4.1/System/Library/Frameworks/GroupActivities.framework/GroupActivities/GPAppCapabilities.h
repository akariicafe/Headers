@interface GPAppCapabilities : NSObject {
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ $__lazy_storage_$_managedConfigurationObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportsSharePlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportsStartFromApp;
}

@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic) BOOL supportsStartFromApp;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void).cxx_destruct;

@end
