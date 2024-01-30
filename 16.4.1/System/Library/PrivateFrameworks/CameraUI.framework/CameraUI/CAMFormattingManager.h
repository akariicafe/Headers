@interface CAMFormattingManager : NSObject

@property (readonly, nonatomic) BOOL wantsCustomKerning;
@property (readonly, nonatomic) BOOL supportsVerticalText;

+ (id)sharedManager;

- (id)init;
- (void)_commonCAMFormattingManagerInitialization;

@end
