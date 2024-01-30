@class NSString;

@interface BKCatacomb : NSObject

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (id)init;
- (id)catacombCommitDir;
- (void).cxx_destruct;
- (int)writeData:(id)a0 toFile:(id)a1;
- (int)deleteAll;
- (int)syncDir:(id)a0;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (int)recover;
- (int)deleteFile:(id)a0;
- (id)catacombPrepareDir;
- (id)content;
- (int)commitWrite;

@end
