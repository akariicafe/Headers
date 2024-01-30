@class QSSTranslationResponse;

@interface QSSMutableStreamingTranslationStreamingResponse : QSSStreamingTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSTranslationResponse *contentAsQSSTranslationResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
