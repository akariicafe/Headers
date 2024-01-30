@interface CDPWebAccessStateCache : NSObject

@property unsigned long long webAccessStatus;
@property BOOL isValid;

+ (id)sharedInstance;

- (id)init;

@end
