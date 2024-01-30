@class NSString, CLKComplicationDescriptor;

@interface NTKThirdPartyComplication : NTKComplication

@property (readonly, nonatomic) NSString *clkClientIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *clkComplicationDescriptor;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)_addKeysToJSONDictionary:(id)a0;

@end
