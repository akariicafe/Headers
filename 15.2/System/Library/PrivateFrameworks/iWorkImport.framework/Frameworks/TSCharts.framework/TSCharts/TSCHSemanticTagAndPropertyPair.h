@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>

@property (readonly, copy, nonatomic) TSCHStyleSemanticTag *semanticTag;
@property (readonly, nonatomic) int property;

+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)a0;
+ (id)pairWithSemanticTag:(id)a0 property:(int)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSemanticTag:(id)a0 property:(int)a1;

@end
