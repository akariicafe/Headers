@class NSArray;
@protocol UITextInputPayloadDelegate;

@interface UITextInputPayloadController : NSObject

@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;

@end
