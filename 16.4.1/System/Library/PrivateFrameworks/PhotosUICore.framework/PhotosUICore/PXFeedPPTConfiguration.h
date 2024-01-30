@class NSString, PXFeedConfiguration;

@interface PXFeedPPTConfiguration : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration;

+ (id)configurationsForPreset:(unsigned long long)a0 testOptions:(id)a1;

- (id)initWithPreset:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 feedConfiguration:(id)a1;

@end
