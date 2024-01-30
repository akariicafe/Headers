@class _LTLocalePair, NSString;

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pairState;
@property (retain, nonatomic) _LTLocalePair *pair;
@property (retain, nonatomic) NSString *sourceASRState;
@property (retain, nonatomic) NSString *targetASRState;
@property (retain, nonatomic) NSString *mtState;
@property (retain, nonatomic) NSString *sourceTTSState;
@property (retain, nonatomic) NSString *targetTTSState;
@property (nonatomic) BOOL needsUpdate;

- (void).cxx_destruct;
- (id)initWithLocales:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
