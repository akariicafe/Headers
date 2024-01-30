@class NSMutableDictionary, NSURL, NSData, NSError, MFFileArchiveEntry;

@interface MFFileArchiveDirectory : NSObject {
    NSMutableDictionary *_entries;
    NSMutableDictionary *_scrubbedEntries;
    MFFileArchiveEntry *_mainEntry;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *contents;
@property (readonly, retain, nonatomic) NSError *error;

+ (id)archiveDirectory;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCentralDirectoryInData:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfCentralDirectory:(long long)a0;
+ (struct CentralDirectory { unsigned char x0[4]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned short x7; } *)_centralDirectory:(id)a0;
+ (id)_entriesFromCentralDictionary:(struct CentralDirectory { unsigned char x0[4]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned short x7; } *)a0 inData:(id)a1 archiveData:(id)a2;
+ (struct CentralHeader { unsigned char x0[4]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned int x16; unsigned int x17; char *x18; } *)_centralHeader:(id)a0;
+ (BOOL)_hasZipSignature:(id)a0;

- (void).cxx_destruct;
- (BOOL)setArchiveEntry:(id)a0;
- (id)description;
- (id)archiveEntries;
- (BOOL)inputWithData:(id)a0;
- (id)mainEntry;
- (void)_scrubContentDirectory;
- (BOOL)inputWithURL:(id)a0;
- (void)setMainEntry:(id)a0;
- (id)scrubbedArchiveEntries;

@end
