@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *secureHeader;
@property (readonly, nonatomic) NSString *secureContent;
@property (readonly, nonatomic) NSString *secureFormattedContent;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSString *truncationSentinel;

- (id)initWithSecureHeader:(id)a0 secureContent:(id)a1 secureFormattedContent:(id)a2 input:(id)a3 truncationSentinel:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
