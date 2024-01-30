@class ML3MediaLibraryWriter, ML3MusicLibrary, ML3Client;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) ML3MediaLibraryWriter *writer;
@property (readonly, nonatomic) ML3Client *client;

- (void).cxx_destruct;
- (id)initWithDatabaseImport:(id)a0 library:(id)a1 writer:(id)a2 client:(id)a3;

@end
