@class NSString, SRMemoryMapping, NSFileHandle;

@interface SRFrameStore : NSObject <NSFastEnumeration> {
    unsigned int _datastoreVersion;
    SRMemoryMapping *_frames;
    SRMemoryMapping *_header;
    unsigned long long _permission;
    NSString *_segmentName;
    double _lastAbsoluteTimestamp;
    NSFileHandle *_backingFile;
}

+ (void)initialize;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;

@end
