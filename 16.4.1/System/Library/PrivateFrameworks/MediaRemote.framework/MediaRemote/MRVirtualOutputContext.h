@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)contextID;
- (id)initWithUID:(id)a0;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (unsigned int)type;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setVolume:(float)a0;
- (id)outputDevices;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsVolumeControl;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (float)volume;
- (void).cxx_destruct;
- (id)uniqueIdentifier;

@end
