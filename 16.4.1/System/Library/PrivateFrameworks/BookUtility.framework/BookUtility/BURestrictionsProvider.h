@protocol BURestrictionsProviding;

@interface BURestrictionsProvider : NSObject

@property (class, readonly) id<BURestrictionsProviding> sharedInstance;

@end
