@interface MXTestVolume : MXTestSessionFactory

- (int)testBluetoothVolumePreferences;
- (int)setVolumeForRoute:(id)a0 subType:(id)a1 deviceID:(id)a2 category:(id)a3 mode:(id)a4 volume:(float)a5;
- (int)verifyVolumeForRoute:(id)a0 subType:(id)a1 deviceID:(id)a2 category:(id)a3 mode:(id)a4 volume:(float)a5;

@end
