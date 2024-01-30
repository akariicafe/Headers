@interface WFDeviceAttributesResource : WFResource

+ (BOOL)mustBeAvailableForDisplay;

- (void)refreshAvailability;

@end
