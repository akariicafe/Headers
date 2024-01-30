@class NSNumber;

@interface INFSentenceContext : NSObject

@property (copy, nonatomic) NSNumber *number;
@property (nonatomic) unsigned long long gender;

+ (id)sentenceContext;

- (void).cxx_destruct;
- (id)combinedWithContext:(id)a0;

@end
