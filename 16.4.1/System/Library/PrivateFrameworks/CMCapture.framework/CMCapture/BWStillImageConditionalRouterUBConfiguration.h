@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) NSArray *portTypes;

+ (id)configurationWithPortTypes:(id)a0;

- (void)dealloc;
- (unsigned long long)outputIndexForPortType:(id)a0;

@end
