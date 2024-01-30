@interface MXTestSessionProperty : MXTestSessionFactory {
    struct opaqueCMSession { } *mSession;
}

- (int)verifyClientPriority:(unsigned int)a0;
- (int)verifyAudioHWControlFlags:(unsigned int)a0;
- (int)verifyInterruptionStyle:(unsigned int)a0;
- (int)verifyAudioCategoryBehavior:(struct opaqueCMSession { } *)a0 isMixable:(struct __CFBoolean { } *)a1 postsResumableInterruption:(unsigned char)a2 isPlayAndRecord:(unsigned char)a3 withBluetooth:(unsigned char)a4 andIsDefaultToSpeaker:(unsigned char)a5;
- (int)verifyCategoryCustomization:(unsigned char)a0 andBuiltInRoute:(struct __CFString { } *)a1;
- (int)verifyOverrideRoute:(unsigned char)a0;
- (int)testClientName;
- (int)testIsAudioSession;
- (int)testAudioSessionID;
- (int)testIsFigInstantiatedAudioSession;
- (int)testClientPriority;
- (int)testAudioHardwareControlFlags;
- (int)testInterruptionStyle;
- (int)testAudioCategory;
- (int)testAudioMode;
- (int)testOverrideRoute;
- (int)testCategoryCustomizationEnableBluetoothRecording;
- (int)testCategoryCustomizationDefaultBuiltInRoute;
- (int)testReporterIDs;

@end
