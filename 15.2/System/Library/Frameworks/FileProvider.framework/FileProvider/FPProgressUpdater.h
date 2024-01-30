@class NSString, FPProgressProxy;

@interface FPProgressUpdater : NSObject <FPProgressProtocol>

@property (weak, nonatomic) FPProgressProxy *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportProgressUpdate:(long long)a0 totalUnitCount:(long long)a1 completedFileCount:(long long)a2 totalFileCount:(long long)a3;
- (void).cxx_destruct;

@end
