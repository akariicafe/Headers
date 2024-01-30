@class NSArray, CHTextCorrectionResult;

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers;
@property (readonly, copy, nonatomic) CHTextCorrectionResult *textCorrectionResult;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTextCorrectionResult:(id)a0 inputStrokeIdentifiers:(id)a1;
- (BOOL)isEqualToStrokeGroupTextCorrectionResult:(id)a0;

@end
