@class NSString;

@interface CSBluetoothDeviceInfo : NSObject

@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL supportDoAP;
@property (nonatomic) BOOL isTemporaryPairedNotInContacts;

- (void).cxx_destruct;

@end
