@interface H13FastDemosaicConfigMetal : NSObject

- (id)init;
- (int)getDemosaicConfigForInputFrameMetadata:(id)a0 cameraInfoByPortType:(id)a1 applyCCM:(BOOL)a2 zeroBias:(int)a3 demosaicConfig:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a4;
- (int)getQDEMNoiseSuppressionLUT:(id)a0 adaptiveGradPushDLUT:(id)a1 adaptiveGradPushHVLUT:(id)a2 qdemConfig:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; BOOL x16; BOOL x17; BOOL x18; struct { unsigned short x0[16]; unsigned short x1[16]; } x19; struct { unsigned short x0[16]; unsigned short x1[16]; } x20; struct { unsigned short x0[16]; unsigned short x1[16]; } x21; } *)a3;

@end
