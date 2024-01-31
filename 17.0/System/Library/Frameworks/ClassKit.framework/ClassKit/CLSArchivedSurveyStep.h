@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (BOOL)supportsSecureCoding;

- (void)setType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)version;
- (void)setVersion:(long long)a0;
- (long long)type;
- (id)initWithCoder:(id)a0;

@end
