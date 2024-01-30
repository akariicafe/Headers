@class NSError, CHTextInputTarget, CHTokenizedTextResult;

@interface CHTextCorrectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHTextInputTarget *inputTarget;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } affectedRange;
@property (readonly, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic, getter=isCharacterLevel) BOOL characterLevel;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInputTarget:(id)a0 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textResult:(id)a2 resultType:(long long)a3 isCharacterLevel:(BOOL)a4 error:(id)a5;
- (BOOL)isEqualToTextCorrectionResult:(id)a0;

@end
