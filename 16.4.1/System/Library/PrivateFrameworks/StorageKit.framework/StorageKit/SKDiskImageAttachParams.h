@class SKMountParams;

@interface SKDiskImageAttachParams : NSObject

@property (nonatomic) BOOL is4KBlockSize;
@property (nonatomic) long long policy;
@property (copy, nonatomic) SKMountParams *mountParams;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL stdinPassPhrase;

- (id)initWithParams:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)diAttachParamsWithURL:(id)a0 error:(id *)a1;

@end
