@class NSString;

@interface PFFileIOStream : PFFileIStream <PFOStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)reserveLength:(long long)a0;
- (BOOL)writeStream:(const char *)a0 length:(unsigned long long)a1 written:(unsigned long long *)a2;
- (BOOL)writeStream:(id)a0;
- (BOOL)writeStream:(id)a0 blockSize:(unsigned long long)a1;
- (BOOL)truncateLength:(long long)a0;
- (BOOL)openStream;

@end
