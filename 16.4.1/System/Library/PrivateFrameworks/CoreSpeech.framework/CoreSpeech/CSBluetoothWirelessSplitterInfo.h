@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (unsigned long long)splitterState;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (id)init;
- (id)splitterDeviceList;
- (id)description;
- (void).cxx_destruct;

@end
