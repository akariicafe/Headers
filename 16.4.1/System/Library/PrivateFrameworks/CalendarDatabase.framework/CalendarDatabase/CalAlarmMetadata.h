@interface CalAlarmMetadata : CalItemMetadata

+ (BOOL)supportsSecureCoding;
+ (id)metadataWithData:(id)a0;
+ (BOOL)isRecognizedParameter:(id)a0 forProperty:(id)a1 inComponent:(id)a2;
+ (BOOL)isRecognizedProperty:(id)a0 inComponent:(id)a1;
+ (BOOL)shouldSkipSavingUnrecognizedParametersForProperty:(id)a0 inComponent:(id)a1;

- (id)initWithCoder:(id)a0;

@end
