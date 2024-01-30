@class BUZipArchive, BUZipEntry;

@interface BUContainedZipArchive : BUZipArchive {
    BUZipArchive *_zipArchive;
    BUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)a0 zipArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)isValid;
- (unsigned long long)archiveLength;
- (id)newArchiveReadChannel;
- (id)readChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (id)streamReadChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (id)initWithEntry:(id)a0 zipArchive:(id)a1 options:(unsigned long long)a2;

@end
