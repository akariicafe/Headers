@class UIImage, NSString, NSURLResponse;

@interface WBSTouchIconFetchOperationResult : NSObject

@property (readonly, nonatomic) UIImage *touchIcon;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic, getter=isFavicon) BOOL favicon;
@property (readonly, nonatomic) BOOL pageRequestDidSucceed;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) NSURLResponse *response;

+ (id)resultForFetchFailureWithHost:(id)a0 pageRequestDidSucceed:(BOOL)a1 response:(id)a2;
+ (id)resultWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(BOOL)a2 pageRequestDidSucceed:(BOOL)a3 response:(id)a4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a5;

- (void).cxx_destruct;
- (id)initWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(BOOL)a2 pageRequestDidSucceed:(BOOL)a3 response:(id)a4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a5;

@end
