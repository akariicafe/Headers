@interface LiveFSServiceUserClient : LiveFSUserClient {
    unsigned int volumePort;
}

- (id)init;
- (int)closeFileDescriptorForKernel:(int)a0;
- (unsigned int)createVolumePort;
- (unsigned int)getVolumePort;
- (int)openFileDescriptorForKernel:(int)a0 flags:(int)a1;

@end
