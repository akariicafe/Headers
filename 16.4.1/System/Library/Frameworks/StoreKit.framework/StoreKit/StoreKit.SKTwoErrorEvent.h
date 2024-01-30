@class NSString;

@interface StoreKit.SKTwoErrorEvent : SKBaseErrorEvent

@property (nonatomic, readonly) NSString *eventName;

- (id)init;
- (id)createPayload;

@end
