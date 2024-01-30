@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *secureHeader;
@property (readonly, nonatomic) NSString *secureContent;
@property (readonly, nonatomic) NSString *secureFormattedContent;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSString *truncationSentinel;

- (id)initWithSecureHeader:(id)a0 secureContent:(id)a1 secureFormattedContent:(id)a2 input:(id)a3 truncationSentinel:(id)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
