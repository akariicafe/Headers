@class NSString, NLProbabilityInfo, NSArray;

@interface NLPredictionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_tokenIDArray;
    void *_tokenIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *prediction;
@property (readonly, copy, nonatomic) NLProbabilityInfo *probabilityInfo;
@property (readonly, nonatomic) unsigned long long contextLength;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPrediction:(id)a0 contextLength:(unsigned long long)a1 probabilityInfo:(id)a2;
- (id)initWithPrediction:(id)a0 probabilityInfo:(id)a1;
- (id)initWithPrediction:(id)a0 tokenIDArray:(id)a1 contextLength:(unsigned long long)a2 probabilityInfo:(id)a3;
- (id)initWithPrediction:(id)a0 tokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2 contextLength:(unsigned long long)a3 probabilityInfo:(id)a4;
- (id)tokenIDArray;
- (unsigned long long)tokenIDLength;
- (const unsigned int *)tokenIDs;

@end
