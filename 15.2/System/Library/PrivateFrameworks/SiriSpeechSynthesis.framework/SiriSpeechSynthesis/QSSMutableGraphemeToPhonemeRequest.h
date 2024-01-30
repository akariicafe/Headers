@class NSString, QSSContextWithPronHints;

@interface QSSMutableGraphemeToPhonemeRequest : QSSGraphemeToPhonemeRequest

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) QSSContextWithPronHints *context_with_pron_hints;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
