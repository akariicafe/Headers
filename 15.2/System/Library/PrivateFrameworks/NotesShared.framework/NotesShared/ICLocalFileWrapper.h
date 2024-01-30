@class NSURL, NSData;

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *localURL;
@property (retain, nonatomic) NSData *cachedData;

- (id)serializedRepresentation;
- (id)filename;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)fileAttributes;
- (BOOL)isDirectory;
- (id)fileWrappers;
- (id)dataWithError:(id *)a0;
- (BOOL)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)symbolicLinkDestinationURL;
- (id)addFileWrapper:(id)a0;
- (id)preferredFilename;
- (BOOL)matchesContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (void)removeFileWrapper:(id)a0;
- (id)keyForFileWrapper:(id)a0;
- (id)regularFileContents;
- (BOOL)isSymbolicLink;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalURL:(id)a0;

@end
