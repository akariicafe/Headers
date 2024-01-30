@class NSString;

@interface FTMutableCorrectionsAlignment : FTCorrectionsAlignment

@property (copy, nonatomic) NSString *original_words;
@property (copy, nonatomic) NSString *corrected_words;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
