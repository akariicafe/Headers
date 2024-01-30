@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    BOOL _isTemporaryDevice;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)initWithSpeechRequestOptions:(id)a0;
- (id)description;

@end
