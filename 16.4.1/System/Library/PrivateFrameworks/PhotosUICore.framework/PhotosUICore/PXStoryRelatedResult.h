@class NSArray, NSString;

@interface PXStoryRelatedResult : NSObject

@property (readonly, nonatomic) NSArray *storyConfigurations;
@property (readonly, nonatomic) NSString *debugInfo;

- (void).cxx_destruct;
- (id)initWithStoryConfigurations:(id)a0 debugInfo:(id)a1;

@end
