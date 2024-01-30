@class NSArray;

@interface WFDeviceAttributesResource : WFResource

@property (readonly, nonatomic) NSArray *requiredDeviceIdioms;
@property (readonly, nonatomic) NSArray *requiredCapabilities;

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (void)refreshAvailability;

@end
