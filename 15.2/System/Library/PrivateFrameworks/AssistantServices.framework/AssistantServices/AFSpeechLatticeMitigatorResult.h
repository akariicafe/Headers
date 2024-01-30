@class NSString;

@interface AFSpeechLatticeMitigatorResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;

- (id)initWithResults:(id)a0 score:(float)a1 threshold:(float)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
