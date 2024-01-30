@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser

@property (retain, nonatomic) NSFileHandle *fileHandle;

- (BOOL)processData:(id)a0 forTask:(id)a1;
- (void).cxx_destruct;
- (id)initWithFileHandle:(id)a0;

@end
