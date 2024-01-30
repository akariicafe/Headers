@class NSString;

@interface SFLookupHintRelevancyFeedback : SFFeedback

@property (copy, nonatomic) NSString *context;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } hintRange;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL discarded;
@property (nonatomic) unsigned long long grade;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 hintRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 domain:(id)a2 discarded:(BOOL)a3 grade:(unsigned long long)a4;

@end
