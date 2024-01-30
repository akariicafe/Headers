@protocol SHJSONLFileReaderDelegate;

@interface SHJSONLFileReader : NSObject

@property (weak, nonatomic) id<SHJSONLFileReaderDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;
- (id)fileIOForReadingWithCompression:(BOOL)a0 tap:(id /* block */)a1;
- (BOOL)readFromURL:(id)a0 toStream:(id)a1 error:(id *)a2;

@end
