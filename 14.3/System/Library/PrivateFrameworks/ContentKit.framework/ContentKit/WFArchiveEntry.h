@interface WFArchiveEntry : NSObject

@property (readonly, nonatomic) struct archive_entry { } *entry;
@property (readonly, nonatomic) id /* block */ dataProvider;

+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)a0 usedFilenames:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDirectoryName:(id)a0;
- (id)initWithFilename:(id)a0 fileRepresentation:(id)a1;
- (id)initWithFilename:(id)a0 fileType:(unsigned short)a1 filePermission:(unsigned short)a2 fileSize:(long long)a3 modificationDate:(id)a4 creationDate:(id)a5 dataProvider:(id /* block */)a6;

@end
