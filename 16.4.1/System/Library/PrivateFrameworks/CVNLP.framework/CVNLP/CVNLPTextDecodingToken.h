@class NSString, NSNumber;

@interface CVNLPTextDecodingToken : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) BOOL hasPrecedingSpace;
@property (readonly, copy, nonatomic) NSString *terminatingCharacter;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSNumber *alignmentScore;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } activationRange;
@property (readonly, copy, nonatomic) NSString *fullString;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 score:(id)a1 activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 hasPrecedingSpace:(BOOL)a3;
- (id)initWithString:(id)a0 score:(id)a1 activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 terminatingCharacter:(id)a3;
- (id)initWithString:(id)a0 score:(id)a1 alignmentScore:(id)a2 activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 terminatingCharacter:(id)a4;

@end
