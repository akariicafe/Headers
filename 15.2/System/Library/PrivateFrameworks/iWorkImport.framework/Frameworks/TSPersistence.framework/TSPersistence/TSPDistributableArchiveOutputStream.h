@protocol SFUSimpleOutputStream;

@interface TSPDistributableArchiveOutputStream : NSObject {
    id<SFUSimpleOutputStream> _outputStream;
    long long _offset;
    BOOL _doneWritingObjectEntries;
    BOOL _doneWritingFileDescriptorProtos;
    BOOL _doneWritingClassInfoMap;
    BOOL _descriptorsEnabled;
    BOOL _tocEnabled;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0 checkCrc:(unsigned int)a1 enableDescriptors:(BOOL)a2 enableToc:(BOOL)a3 closedCleanly:(BOOL)a4 archivedVersions:(struct { unsigned long long x0; unsigned long long x1; })a5;
- (BOOL)writeEntry:(id)a0 offset:(long long *)a1 headerLength:(unsigned int *)a2 error:(id *)a3;

@end
