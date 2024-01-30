@class NSString, SATimestamp, SAFrame, NSMutableArray;

@interface SAThread : NSObject <SASerializable> {
    BOOL _isGlobalForcedIdle;
    BOOL _isMainThread;
    SATimestamp *_creationTimestamp;
    SATimestamp *_exitTimestamp;
    SAFrame *_resampledLeafUserFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long threadId;
@property (readonly) SATimestamp *creationTimestamp;
@property (readonly) SATimestamp *exitTimestamp;
@property (readonly) BOOL isGlobalForcedIdle;
@property (readonly) BOOL isProcessorIdleThread;
@property (readonly) BOOL isMainThread;
@property (readonly) NSMutableArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithId:(unsigned long long)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; union { unsigned short x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x1; } x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)enumerateThreadStatesBetweenStartTime:(id)a0 endTime:(id)a1 reverseOrder:(BOOL)a2 withSampleIndex:(BOOL)a3 block:(id /* block */)a4;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)a0 withSampleIndex:(BOOL)a1;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)a0 withSampleIndex:(BOOL)a1;
- (id)firstThreadStateOnOrAfterTime:(id)a0 withSampleIndex:(BOOL)a1;
- (id)lastThreadStateOnOrBeforeTime:(id)a0 withSampleIndex:(BOOL)a1;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)a0 end:(id)a1;
- (id)patchedStackForTruncatedStack:(id)a0;

@end
