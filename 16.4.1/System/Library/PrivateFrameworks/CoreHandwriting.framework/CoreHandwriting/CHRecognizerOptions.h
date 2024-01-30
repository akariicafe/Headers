@interface CHRecognizerOptions : NSObject

@property (nonatomic) BOOL enableCachingIfAvailable;
@property (nonatomic) BOOL enableGen2ModelIfAvailable;
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable;

- (id)init;

@end
