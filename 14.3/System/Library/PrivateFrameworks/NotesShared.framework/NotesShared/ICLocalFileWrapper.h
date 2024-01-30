@class NSURL, NSData;

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *localURL;
@property (retain, nonatomic) NSData *cachedData;

- (id)filename;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)initWithLocalURL:(id)a0;
- (BOOL)isDirectory;
- (id)fileWrappers;
- (id)initWithCoder:(id)a0;
- (id)addFileWrapper:(id)a0;
- (id)fileAttributes;
- (BOOL)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)symbolicLinkDestinationURL;
- (BOOL)matchesContentsOfURL:(id)a0;
- (id)preferredFilename;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)a0;
- (id)keyForFileWrapper:(id)a0;
- (id)dataWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSymbolicLink;

@end
