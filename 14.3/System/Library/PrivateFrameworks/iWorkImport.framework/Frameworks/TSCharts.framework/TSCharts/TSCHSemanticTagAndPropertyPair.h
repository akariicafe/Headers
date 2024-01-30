@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {
    TSCHStyleSemanticTag *mSemanticTag;
    int mProperty;
}

+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)a0;
+ (id)pairWithSemanticTag:(id)a0 property:(int)a1;

- (int)property;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)semanticTag;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSemanticTag:(id)a0 property:(int)a1;

@end
