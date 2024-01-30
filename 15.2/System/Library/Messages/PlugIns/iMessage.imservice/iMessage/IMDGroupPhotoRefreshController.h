@class NSMutableSet;

@interface IMDGroupPhotoRefreshController : NSObject

@property (retain, nonatomic) NSMutableSet *refreshRequests;
@property (readonly, nonatomic) double minRefreshTime;
@property (readonly, nonatomic) double maxRefreshTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldRefreshTTLForGroupPhoto:(id)a0 chatGUID:(id)a1;
- (void)refreshTTLForGroupPhoto:(id)a0 chat:(id)a1;

@end
