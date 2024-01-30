@class NSString, EAAccessory;

@interface PSGAccessoryDetailsController : PSListController <EAAccessoryDelegate> {
    EAAccessory *_accessory;
    BOOL _shouldEscape;
    BOOL _finishedAppearing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (id)modelNumber;
- (id)manufacturer;
- (id)serialNumber;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)disconnect;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (void)accessoryDidDisconnect:(id)a0;
- (id)bonjourName;
- (void)_accessoryDidUpdate:(id)a0;
- (void)findAppForAccessory;

@end
