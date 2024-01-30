@class NSString;

@interface AFDeleteSiriHistoryContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *successTitle;
@property (readonly, copy, nonatomic) NSString *successBody;
@property (readonly, copy, nonatomic) NSString *successButtonText;
@property (readonly, copy, nonatomic) NSString *errorTitle;
@property (readonly, copy, nonatomic) NSString *errorBody;
@property (readonly, copy, nonatomic) NSString *errorButtonText;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccessTitle:(id)a0 successBody:(id)a1 successButtonText:(id)a2 errorTitle:(id)a3 errorBody:(id)a4 errorButtonText:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
