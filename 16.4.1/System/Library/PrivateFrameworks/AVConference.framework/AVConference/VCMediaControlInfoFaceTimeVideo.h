@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {
    unsigned char _controlInfoCameraStatus;
    unsigned char _controlInfoLTRBits;
    unsigned int _controlInfoLTRTimestamp;
    struct { unsigned short totalPacketsPerFrame; unsigned short frameSequenceNumber; } _controlInfoFrameExtensionData;
    unsigned char _controlInfoFEC[36];
    unsigned long long _controlInfoFECLength;
    unsigned int _controlInfoProbe;
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoVideoPacketSize;
    unsigned int _controlInfoVideoTimestamp;
    double _controlInfoVideoArrivalTime;
}

- (id)init;
- (id)description;
- (unsigned long long)serializedSize;
- (int)configureWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2;
- (int)getInfo:(void *)a0 bufferLength:(unsigned long long)a1 infoSize:(unsigned long long *)a2 type:(unsigned int)a3;
- (int)handleOptionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a0;
- (BOOL)hasInfoType:(unsigned int)a0;
- (id)initWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2 version:(unsigned char)a3;
- (int)serializeToBuffer:(char *)a0 bufferLength:(unsigned long long)a1 blobLength:(unsigned long long *)a2;
- (int)setInfo:(void *)a0 size:(unsigned long long)a1 type:(unsigned int)a2;

@end
