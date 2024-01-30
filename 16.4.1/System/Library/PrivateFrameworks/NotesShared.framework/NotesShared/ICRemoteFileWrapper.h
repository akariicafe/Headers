@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSData *cachedData;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isDirectory;
- (id)filename;
- (id)initWithCoder:(id)a0;
- (id)fileAttributes;
- (id)serializedRepresentation;
- (BOOL)isSymbolicLink;
- (void).cxx_destruct;
- (id)addFileWrapper:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)fileWrappers;
- (id)keyForFileWrapper:(id)a0;
- (BOOL)matchesContentsOfURL:(id)a0;
- (id)preferredFilename;
- (BOOL)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)a0;
- (id)symbolicLinkDestinationURL;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)dataWithError:(id *)a0;
- (id)initWithRemoteURL:(id)a0;

@end
