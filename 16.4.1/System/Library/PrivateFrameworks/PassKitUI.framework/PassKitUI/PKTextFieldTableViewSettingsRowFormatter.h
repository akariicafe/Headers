@class NSSet;

@interface PKTextFieldTableViewSettingsRowFormatter : NSObject

@property (copy, nonatomic) NSSet *formatPaddingCharacters;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)formattedValueFromInput:(id)a0;
- (id)submissionValueFromFormattedInput:(id)a0;

@end
