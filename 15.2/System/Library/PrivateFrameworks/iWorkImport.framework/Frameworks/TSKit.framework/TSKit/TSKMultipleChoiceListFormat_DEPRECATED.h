@protocol TSUMultipleChoiceListChoiceProviding;

@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>

@property (readonly, nonatomic) int initialValue;
@property (readonly, nonatomic) unsigned int multipleChoiceListFormatID;
@property (readonly, nonatomic) id<TSUMultipleChoiceListChoiceProviding> popupModel;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithInitialValue:(int)a0 multipleChoiceListFormatID:(unsigned int)a1 popupModel:(id)a2;
- (id)asMultipleChoiceListFormat;

@end
