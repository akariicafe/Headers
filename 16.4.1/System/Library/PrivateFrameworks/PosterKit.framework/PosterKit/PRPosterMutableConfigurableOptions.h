@class NSString, NSArray, PRPosterDescriptorHomeScreenConfiguration;

@interface PRPosterMutableConfigurableOptions : PRPosterConfigurableOptions

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
