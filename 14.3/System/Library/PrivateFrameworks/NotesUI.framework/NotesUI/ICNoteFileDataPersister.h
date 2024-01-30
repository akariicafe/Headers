@class NSURL;

@interface ICNoteFileDataPersister : NSObject <ICDataPersister>

@property (retain, nonatomic) NSURL *baseURL;

- (id)urlForIdentifier:(id)a0;
- (id)init;
- (BOOL)saveData:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (id)loadDataForIdentifier:(id)a0;
- (id)initWithNotePackageURL:(id)a0;

@end
