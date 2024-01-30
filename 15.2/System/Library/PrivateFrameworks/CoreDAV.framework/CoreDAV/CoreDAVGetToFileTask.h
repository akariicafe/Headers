@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask

@property (retain, nonatomic) NSFileHandle *destinationFile;

- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldLogResponseBody;
- (id)initWithURL:(id)a0 destinationFile:(id)a1;

@end
