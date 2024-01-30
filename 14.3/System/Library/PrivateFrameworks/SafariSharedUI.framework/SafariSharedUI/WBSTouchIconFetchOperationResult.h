@class UIImage, NSString;

@interface WBSTouchIconFetchOperationResult : NSObject

@property (readonly, nonatomic) UIImage *touchIcon;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic, getter=isFavicon) BOOL favicon;
@property (readonly, nonatomic) BOOL pageRequestDidSucceed;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;

+ (id)resultForFetchFailureWithHost:(id)a0 pageRequestDidSucceed:(BOOL)a1;
+ (id)resultWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(BOOL)a2 pageRequestDidSucceed:(BOOL)a3 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a4;

- (void).cxx_destruct;
- (id)initWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(BOOL)a2 pageRequestDidSucceed:(BOOL)a3 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a4;

@end
