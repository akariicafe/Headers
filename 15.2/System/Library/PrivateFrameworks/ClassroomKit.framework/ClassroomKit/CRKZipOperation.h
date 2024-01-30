@class NSURL;

@interface CRKZipOperation : CATOperation

@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) NSURL *destinationZipFileURL;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (id)initWithDirectoryURL:(id)a0 destinationZipName:(id)a1;
- (id)initWithDirectoryURL:(id)a0 destinationZipURL:(id)a1;
- (BOOL)validateParametersWithError:(id *)a0;
- (BOOL)createDestinationDirectoryWithError:(id *)a0;
- (BOOL)writeArchiveOfDirectoryAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (struct archive { } *)makeArchiveWithError:(id *)a0;
- (BOOL)populateArchive:(struct archive { } *)a0 error:(id *)a1;
- (void)finalizeArchive:(struct archive { } *)a0;
- (id)errorFromArchive:(struct archive { } *)a0;
- (BOOL)populateArchive:(struct archive { } *)a0 usingDisk:(struct archive { } *)a1 error:(id *)a2;
- (BOOL)writeFTSEntry:(id)a0 toArchive:(struct archive { } *)a1 usingDisk:(struct archive { } *)a2 error:(id *)a3;
- (BOOL)writeHeaderForFTSEntry:(id)a0 toArchive:(struct archive { } *)a1 usingDisk:(struct archive { } *)a2 fileDescriptor:(int)a3 error:(id *)a4;
- (BOOL)writeDataForFTSEntry:(id)a0 toArchive:(struct archive { } *)a1 fileDescriptor:(int)a2 error:(id *)a3;
- (const char *)relativePathForPathOnDisk:(id)a0;
- (long long)lengthOfBufferForFileDescriptor:(int)a0 stat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })a1;
- (BOOL)writeDataFromFileDescriptor:(int)a0 toArchive:(struct archive { } *)a1 usingBuffer:(id)a2 error:(id *)a3;

@end
