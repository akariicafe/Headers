@interface PXSuggestionToken : NSObject

@property (nonatomic) unsigned long long token;
@property (readonly, nonatomic) BOOL canceled;

- (void)cancel;
- (id)init;

@end
