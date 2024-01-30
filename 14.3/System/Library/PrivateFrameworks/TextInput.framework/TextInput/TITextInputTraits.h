@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {
    union { long long integerValue; struct { unsigned char autocapitalizationType : 2; unsigned char autocorrectionType : 2; unsigned char spellCheckingType : 2; unsigned char keyboardType : 4; unsigned char keyboardAppearance : 2; unsigned char returnKeyType : 4; unsigned char textScriptType : 4; unsigned char enablesReturnKeyAutomatically : 1; unsigned char secureTextEntry : 1; unsigned char smartInsertDeleteEnabled : 1; unsigned char smartQuotesEnabled : 1; unsigned char smartDashesEnabled : 1; unsigned char disablePrediction : 1; unsigned char smartInsertDeleteType : 2; unsigned char smartQuotesType : 2; unsigned char smartDashesType : 2; } fields; } _mask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long autocorrectionType;
@property (nonatomic) unsigned long long spellCheckingType;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) unsigned long long keyboardAppearance;
@property (nonatomic) unsigned long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) unsigned long long textScriptType;
@property (nonatomic) BOOL smartInsertDeleteEnabled;
@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) unsigned long long smartInsertDeleteType;
@property (nonatomic) unsigned long long smartQuotesType;
@property (nonatomic) unsigned long long smartDashesType;
@property (nonatomic) BOOL disablePrediction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
