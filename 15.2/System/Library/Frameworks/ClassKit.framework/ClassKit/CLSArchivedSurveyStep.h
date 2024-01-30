@interface CLSArchivedSurveyStep : CLSObject {
    long long _version;
    long long _type;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)setVersion:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setType:(long long)a0;

@end
