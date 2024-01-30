@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    BOOL _isTemporaryDevice;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithSpeechRequestOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
