@class NSData;

@interface KtraceLoggingDataSource : NSObject <OSLogEventDeserializerDataSourceDelegate>

@property (nonatomic) struct ktrace_file { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; struct ktrace_chunk_array { struct ktrace_chunk **x0; struct ktrace_chunk *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; long long x5; long long x6; } x3; struct ktrace_chunk_array { struct ktrace_chunk **x0; struct ktrace_chunk *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; long long x5; long long x6; } x4; struct ktrace_chunk *x5; struct ktrace_chunk *x6; struct ktrace_chunk *x7; unsigned long long x8; unsigned long long x9; unsigned int x10; struct timezone { int x0; int x1; } x11; struct { unsigned int x0; unsigned int x1; } x12; int x13; struct ktrace_file *x14; struct __CFDictionary *x15; unsigned int x16; struct __CFDictionary *x17; struct ktrace_chunk *x18; char *x19; unsigned long long x20; id /* block */ x21; id /* block */ x22; id /* block */ x23; long long x24; long long x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; } *_ktfile;
@property (retain, nonatomic) NSData *_metadata;
@property (nonatomic) struct ktrace_chunk { struct ktrace_file *x0; unsigned long long x1; union { long long x0; struct __CFData *x1; } x2; unsigned long long x3; unsigned int x4; unsigned short x5; unsigned short x6; struct ktrace_chunk *x7; struct ktrace_chunk_array { struct ktrace_chunk **x0; struct ktrace_chunk *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; long long x5; long long x6; } x8; union { struct ktrace_chunk *x0; } x9; } *_nextChunk;
@property (nonatomic) BOOL _skipFirst;

- (void)dealloc;
- (id)metadataChunk;
- (id)nextEventDataChunk;
- (id)initWithKtraceFile:(struct ktrace_file { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; struct ktrace_chunk_array { struct ktrace_chunk **x0; struct ktrace_chunk *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; long long x5; long long x6; } x3; struct ktrace_chunk_array { struct ktrace_chunk **x0; struct ktrace_chunk *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; long long x5; long long x6; } x4; struct ktrace_chunk *x5; struct ktrace_chunk *x6; struct ktrace_chunk *x7; unsigned long long x8; unsigned long long x9; unsigned int x10; struct timezone { int x0; int x1; } x11; struct { unsigned int x0; unsigned int x1; } x12; int x13; struct ktrace_file *x14; struct __CFDictionary *x15; unsigned int x16; struct __CFDictionary *x17; struct ktrace_chunk *x18; char *x19; unsigned long long x20; id /* block */ x21; id /* block */ x22; id /* block */ x23; long long x24; long long x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; } *)a0;

@end
