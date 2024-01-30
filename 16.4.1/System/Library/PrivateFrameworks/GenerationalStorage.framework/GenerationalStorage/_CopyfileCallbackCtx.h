@class NSProgress;

@interface _CopyfileCallbackCtx : NSObject

@property (nonatomic) BOOL doArchive;
@property (nonatomic) BOOL doUnarchive;
@property (nonatomic) unsigned long long generationSize;
@property (readonly, nonatomic) NSProgress *progress;

- (id)initWithPath:(const char *)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
