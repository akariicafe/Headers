@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)version;
- (void)setVersion:(long long)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (void)setType:(long long)a0;

@end
