@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (unsigned long long)splitterState;
- (id)description;
- (id)splitterDeviceList;

@end
