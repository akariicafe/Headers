@interface PHAdjustmentDataRequestBehaviorSpec : NSObject

@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;

@end
