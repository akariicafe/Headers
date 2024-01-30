@class NSString, FTAlignment;

@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken

@property (copy, nonatomic) NSString *token;
@property (nonatomic) float confidence;
@property (copy, nonatomic) FTAlignment *mt_alignment;
@property (nonatomic) BOOL add_space_after;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
