@interface CKDeviceActivityStore : NSObject <CKWritableDeviceActivityStore> {
    void /* unknown type, empty encoding */ store;
}

- (void)recordActivityWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)recordActivityWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 error:(id *)a3;
- (id)init;
- (void).cxx_destruct;

@end
