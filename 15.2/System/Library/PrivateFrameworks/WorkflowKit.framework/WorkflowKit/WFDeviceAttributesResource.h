@class NSArray;

@interface WFDeviceAttributesResource : WFResource

@property (readonly, nonatomic) NSArray *requiredDeviceIdioms;
@property (readonly, nonatomic) NSArray *requiredCapabilities;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;

@end
