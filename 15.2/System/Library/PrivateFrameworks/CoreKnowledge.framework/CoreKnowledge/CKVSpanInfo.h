@class NSString;

@interface CKVSpanInfo : NSObject <NSCopying>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } spanRange;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) float matchScore;
@property (readonly, nonatomic) unsigned int maxTokenCount;
@property (readonly, nonatomic) unsigned int matchedTokenCount;
@property (readonly, nonatomic) unsigned int maxStopWordCount;
@property (readonly, nonatomic) unsigned int matchedStopWordCount;
@property (readonly, nonatomic) unsigned int editDistance;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSpanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 value:(id)a1 matchScore:(float)a2 maxTokenCount:(unsigned int)a3 matchedTokenCount:(unsigned int)a4 maxStopWordCount:(unsigned int)a5 matchedStopWordCount:(unsigned int)a6 editDistance:(unsigned int)a7;
- (BOOL)isEqualToSpanInfo:(id)a0;
- (BOOL)isPartialMatch;
- (BOOL)isApproximateMatch;

@end
