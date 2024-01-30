@class NSArray;

@interface AFVoiceCommandGrammarParsePackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *nBestParses;
@property (readonly, copy, nonatomic) NSArray *preITNNBestParses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNBestParses:(id)a0 preITNNBestParses:(id)a1;

@end
