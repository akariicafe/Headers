@class NSProgress;

@interface _CopyfileCallbackCtx : NSObject

@property (nonatomic) BOOL doArchive;
@property (nonatomic) BOOL doUnarchive;
@property (nonatomic) unsigned long long generationSize;
@property (readonly, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (id)initWithPath:(const char *)a0 error:(id *)a1;

@end
