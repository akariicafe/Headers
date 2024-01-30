@class NSString, NSArray;

@interface SCRCMathArrayExpression : SCRCMathExpression {
    NSArray *_children;
}

@property (readonly, nonatomic) NSString *mathMLTag;
@property (readonly, nonatomic) NSArray *mathMLAttributes;

- (void).cxx_destruct;
- (id)children;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)prefixForChildAtIndex:(unsigned long long)a0;
- (id)suffixForChildAtIndex:(unsigned long long)a0;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 parentTreePosition:(id)a2 childIndex:(unsigned long long *)a3;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)a0;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)a0;
- (id)subExpressions;
- (BOOL)hasSimpleArrayOfChildren;

@end
