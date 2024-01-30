@class NSString, NSFileHandle;

@interface DVTFileStream : NSObject <DVTInputStream> {
    unsigned long long _fileSize;
    unsigned long long _currentRead;
}

@property (readonly) NSFileHandle *file;
@property (readonly, nonatomic) BOOL supportsPeek;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (BOOL)hasData;
- (void).cxx_destruct;
- (void)_updateFileSize;
- (id)initWithFD:(int)a0;
- (id)peek:(unsigned long long)a0 error:(id *)a1;
- (id)read:(unsigned long long)a0 error:(id *)a1;
- (id)readToEnd:(id *)a0;

@end
