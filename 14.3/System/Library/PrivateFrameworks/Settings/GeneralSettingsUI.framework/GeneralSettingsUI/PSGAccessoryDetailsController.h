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
- (void)disconnect;
- (id)firmwareRevision;
- (id)manufacturer;
- (id)init;
- (id)serialNumber;
- (void).cxx_destruct;
- (void)_accessoryDidUpdate:(id)a0;
- (void)dealloc;
- (id)modelNumber;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)hardwareRevision;
- (void)accessoryDidDisconnect:(id)a0;
- (id)bonjourName;
- (void)findAppForAccessory;

@end
