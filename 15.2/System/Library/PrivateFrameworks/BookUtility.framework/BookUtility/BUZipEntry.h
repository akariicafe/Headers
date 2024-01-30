@class NSString, NSDate;

@interface BUZipEntry : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collapsedName;
@property (nonatomic, getter=isCompressed) BOOL compressed;
@property (copy, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long long fileHeaderLength;
@property (nonatomic) unsigned int externalFileAttributes;
@property (readonly, nonatomic, getter=isSymLink) BOOL symLink;

- (id)description;
- (void).cxx_destruct;
- (id)usableName;
- (BOOL)extractFromArchive:(id)a0 destinationURL:(id)a1 error:(id *)a2;
- (id)_dataFromArchive:(id)a0 error:(id *)a1;
- (id)_extractFromArchiveData:(id)a0 destinationURL:(id)a1 allowEntriesOutsideRoot:(BOOL)a2 error:(id *)a3;
- (void)_beginStreamingWriteForArchive:(id)a0 forDestinationURL:(id)a1 completion:(id /* block */)a2;
- (id)stringFromArchive:(id)a0;
- (id)dataFromArchive:(id)a0;
- (id)plistFromArchive:(id)a0;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)xmlDocumentFromArchive:(id)a0;
- (id)extractFromArchive:(id)a0;

@end
