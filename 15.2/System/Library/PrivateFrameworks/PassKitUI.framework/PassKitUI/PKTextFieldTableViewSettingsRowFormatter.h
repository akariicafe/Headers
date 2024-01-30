@class NSSet;

@interface PKTextFieldTableViewSettingsRowFormatter : NSObject

@property (copy, nonatomic) NSSet *formatPaddingCharacters;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)formattedValueFromInput:(id)a0;
- (id)submissionValueFromFormattedInput:(id)a0;

@end
