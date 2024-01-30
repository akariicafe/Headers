@interface PXSuggestionToken : NSObject

@property (nonatomic) unsigned long long token;
@property (readonly, nonatomic) BOOL canceled;

- (id)init;
- (void)cancel;

@end
