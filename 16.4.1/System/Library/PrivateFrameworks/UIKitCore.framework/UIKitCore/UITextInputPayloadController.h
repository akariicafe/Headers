@class NSArray;
@protocol UITextInputPayloadDelegate;

@interface UITextInputPayloadController : NSObject

@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (weak, nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void).cxx_destruct;

@end
