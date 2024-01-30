@class NSString;

@interface PBFDataRefreshState : NSObject

@property (readonly, nonatomic) BOOL needsRefresh;
@property (readonly, copy, nonatomic) NSString *refreshReason;

- (void).cxx_destruct;
- (id)initWithNeedsRefresh:(BOOL)a0 reason:(id)a1;

@end
