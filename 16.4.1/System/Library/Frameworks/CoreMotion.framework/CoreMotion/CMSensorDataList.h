@class CLSensorRecorderSensorMeta, NSArray, CMSensorRecorderInternal, NSObject, NSMutableArray;
@protocol OS_xpc_object;

@interface CMSensorDataList : NSObject <NSFastEnumeration> {
    CMSensorRecorderInternal *fProxy;
    NSObject<OS_xpc_object> *fDataBuffer;
    CLSensorRecorderSensorMeta *fCurrentBlock;
    unsigned long long fCurrentBlockIdentifier;
    long long fCurrentBlockDataIdentifier;
    double fCurrentBlockStartTime;
    unsigned long long fCurrentBlockTimestamp;
    char *fDataBufferPtr;
    unsigned long long fDataBufferLength;
    unsigned long long fCurrentIdentifier;
    unsigned long long fStartingIdentifier;
    long long fRetrievedDataBufferIdentifier;
    unsigned long long fBlockOffset;
    struct AccelUnpacker { char *fData; unsigned int fBitsLeft; unsigned char fPartial; unsigned long long fTimestampLast; long long fTimestampLastDelta; int fSampleLast[3]; } fAccelUnpacker;
    struct GyroUnpacker { char *fData; unsigned int fBitsLeft; unsigned char fPartial; unsigned long long fTimestampLast; long long fTimestampLastDelta; int fSampleLast[4]; } fGyroUnpacker;
    struct PressureUnpacker { char *fData; unsigned int fBitsLeft; unsigned char fPartial; unsigned long long fTimestampLast; long long fTimestampLastDelta; int fSampleLast[2]; } fPressureUnpacker;
    NSMutableArray *fCachedData;
    NSArray *fMetaArray;
    int fDataType;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)_updatePointers;
- (void)_updateCurrentBlockProperties;
- (id)initFrom:(double)a0 to:(double)a1 withType:(int)a2;
- (id)initWithIdentifier:(unsigned long long)a0 andType:(int)a1;

@end
