@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (id)content;
- (id)catacombCommitDir;
- (int)commitWrite;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (int)deleteAll;
- (int)deleteFile:(id)a0;
- (id)catacombPrepareDir;
- (int)recover;
- (int)syncDir:(id)a0;
- (id)init;
- (int)writeData:(id)a0 toFile:(id)a1;
- (void).cxx_destruct;

@end
