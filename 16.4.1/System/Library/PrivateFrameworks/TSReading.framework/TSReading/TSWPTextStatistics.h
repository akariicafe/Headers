@interface TSWPTextStatistics : NSObject <NSCopying>

@property (nonatomic) unsigned long long wordCount;
@property (nonatomic) unsigned long long charactersNoWhiteSpace;
@property (nonatomic) unsigned long long paragraphCount;
@property (nonatomic) BOOL isAccurate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)resetStatistics;
- (void)addTextStatistics:(id)a0;
- (void)removeTextStatistics:(id)a0;
- (void)setTextStatistics:(id)a0;

@end
