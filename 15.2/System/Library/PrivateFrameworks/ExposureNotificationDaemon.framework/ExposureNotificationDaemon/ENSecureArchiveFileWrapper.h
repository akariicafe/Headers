@class NSString;

@interface ENSecureArchiveFileWrapper : NSObject {
    int _fileDescriptor;
}

@property (readonly, copy, nonatomic) NSString *path;

- (BOOL)openWithError:(id *)a0;
- (id)initWithPath:(id)a0;
- (void)close;
- (BOOL)readObject:(id *)a0 ofClasses:(id)a1 error:(id *)a2;
- (BOOL)saveObject:(id)a0 error:(id *)a1;
- (BOOL)_writeObject:(id)a0 toFileDescriptor:(int)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)readObject:(id *)a0 ofClass:(Class)a1 error:(id *)a2;

@end
