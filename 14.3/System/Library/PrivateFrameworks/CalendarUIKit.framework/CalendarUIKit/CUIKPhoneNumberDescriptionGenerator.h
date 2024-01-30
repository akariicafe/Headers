@interface CUIKPhoneNumberDescriptionGenerator : CUIKDescriptionGenerator

+ (id)normalizedPhoneNumber:(id)a0;
+ (id)sharedGenerator;

- (id)formattedStringForPhoneNumber:(id)a0;
- (id)formattedStringForTelURL:(id)a0;

@end
