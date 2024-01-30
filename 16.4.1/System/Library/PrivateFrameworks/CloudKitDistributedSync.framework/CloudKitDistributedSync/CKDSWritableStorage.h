@class NSMutableData;

@interface CKDSWritableStorage : CKDSStorage

@property (readonly, nonatomic) NSMutableData *data;

- (id)initWithFileURL:(id)a0;
- (id)initInMemory;
- (id)readableStorage;
- (id)initWithTemporaryFile:(id *)a0;

@end
