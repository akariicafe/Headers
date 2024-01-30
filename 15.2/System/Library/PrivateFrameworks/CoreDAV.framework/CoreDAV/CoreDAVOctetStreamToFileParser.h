@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser

@property (retain, nonatomic) NSFileHandle *fileHandle;

- (BOOL)processData:(id)a0 forTask:(id)a1;
- (id)initWithFileHandle:(id)a0;
- (void).cxx_destruct;

@end
