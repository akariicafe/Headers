@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)deleteFile:(id)a0;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (id)catacombCommitDir;
- (int)writeData:(id)a0 toFile:(id)a1;
- (int)syncDir:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)deleteAll;
- (int)recover;
- (id)catacombPrepareDir;
- (int)commitWrite;
- (id)content;

@end
