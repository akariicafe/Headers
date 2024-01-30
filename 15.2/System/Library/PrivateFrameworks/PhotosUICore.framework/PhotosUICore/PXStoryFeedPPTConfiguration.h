@class NSString, PXStoryFeedConfiguration;

@interface PXStoryFeedPPTConfiguration : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration;

+ (id)configurationsForPreset:(unsigned long long)a0 testOptions:(id)a1;

- (id)initWithPreset:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 feedConfiguration:(id)a1;

@end
