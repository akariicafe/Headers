@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void)setVolume:(float)a0;
- (float)volume;
- (BOOL)supportsVolumeControl;
- (void)resetPredictedOutputDevice;
- (id)outputDevices;
- (id)predictedOutputDevice;
- (id)initWithUID:(id)a0;
- (id)uniqueIdentifier;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)contextID;
- (BOOL)isVolumeControlAvailable;
- (void).cxx_destruct;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (unsigned int)type;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;

@end
