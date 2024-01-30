@class NSString, QSSAlignment;

@interface QSSMutableTranslationResponse_TranslationToken : QSSTranslationResponse_TranslationToken

@property (copy, nonatomic) NSString *token;
@property (nonatomic) float confidence;
@property (copy, nonatomic) QSSAlignment *mt_alignment;
@property (nonatomic) BOOL add_space_after;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
