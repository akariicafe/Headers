@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {
    id /* block */ changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } listLock;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)defaultDeviceOfType:(unsigned int)a0;
+ (id)newDeviceList;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)deviceList;
- (unsigned int)dataSourceControlID;
- (void)notifyDeviceListChanged;

@end
