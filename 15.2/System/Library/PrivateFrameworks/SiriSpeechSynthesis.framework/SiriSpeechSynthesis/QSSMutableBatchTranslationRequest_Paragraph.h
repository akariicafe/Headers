@class NSString, NSArray;

@interface QSSMutableBatchTranslationRequest_Paragraph : QSSBatchTranslationRequest_Paragraph

@property (copy, nonatomic) NSString *paragraph_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *span;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
