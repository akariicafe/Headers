@interface CUIKPhoneNumberDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;
+ (id)normalizedPhoneNumber:(id)a0;

- (id)formattedStringForPhoneNumber:(id)a0;
- (id)formattedStringForTelURL:(id)a0;

@end
