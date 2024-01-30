@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (unsigned long long)splitterState;
- (id)splitterDeviceList;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;

@end
