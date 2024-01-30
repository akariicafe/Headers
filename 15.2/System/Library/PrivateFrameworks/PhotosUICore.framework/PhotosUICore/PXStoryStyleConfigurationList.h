@class NSArray, PXStoryStyleConfiguration;

@interface PXStoryStyleConfigurationList : NSObject

@property (readonly, copy, nonatomic) NSArray *autoEditStyleConfigurations;
@property (readonly, nonatomic) PXStoryStyleConfiguration *initialStyleConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithAutoEditStyleConfigurations:(id)a0 initialStyleConfiguration:(id)a1;

@end
