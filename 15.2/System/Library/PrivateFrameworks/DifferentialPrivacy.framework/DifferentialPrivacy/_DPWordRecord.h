@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *wordPosition;
@property (readonly, copy, nonatomic) NSString *word;

+ (id)bogusCharacter;
+ (id)sequenceAndFragmentsFrom:(id)a0 fragmentLimit:(unsigned long long)a1 fragmentWidth:(unsigned long long)a2 puzzlePieceCount:(unsigned long long)a3;
+ (id)word:(id)a0 atPosition:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)sequenceWithoutPadding;
- (id)initWithWord:(id)a0 atPosition:(id)a1;
- (BOOL)isEqualToWordRecord:(id)a0;

@end
