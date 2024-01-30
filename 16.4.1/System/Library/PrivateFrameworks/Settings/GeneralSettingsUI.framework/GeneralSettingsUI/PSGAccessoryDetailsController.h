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

- (id)manufacturer;
- (void)connect;
- (void)disconnect;
- (id)modelNumber;
- (id)serialNumber;
- (void)dealloc;
- (id)firmwareRevision;
- (id)specifiers;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)hardwareRevision;
- (void)accessoryDidDisconnect:(id)a0;
- (id)bonjourName;
- (void)_accessoryDidUpdate:(id)a0;
- (void)findAppForAccessory;

@end
