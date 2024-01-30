@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying>

@property (readonly, nonatomic) unsigned long long grade;
@property (copy, nonatomic) NSString *textFeedback;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 grade:(unsigned long long)a1 textFeedback:(id)a2;
- (id)initWithResult:(id)a0 grade:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
