@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContentCollection *content;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContent:(id)a0 contentType:(long long)a1 caseInsensitive:(BOOL)a2 comparableTimeUnits:(unsigned long long)a3;

@end
