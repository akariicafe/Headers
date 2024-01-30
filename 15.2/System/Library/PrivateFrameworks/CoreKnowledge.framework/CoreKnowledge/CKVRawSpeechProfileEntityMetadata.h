@class NSString, CKVPriorInfo;

@interface CKVRawSpeechProfileEntityMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long categoryIndex;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) CKVPriorInfo *priorInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCategoryIndex:(unsigned long long)a0 itemId:(id)a1 priorInfo:(id)a2;
- (BOOL)isEqualToRawSpeechProfileEntityMetadata:(id)a0;

@end
