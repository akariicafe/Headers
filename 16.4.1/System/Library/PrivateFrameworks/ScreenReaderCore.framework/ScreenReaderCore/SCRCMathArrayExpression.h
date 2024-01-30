@class NSString, NSArray;

@interface SCRCMathArrayExpression : SCRCMathExpression {
    NSArray *_children;
}

@property (readonly, nonatomic) NSString *mathMLTag;
@property (readonly, nonatomic) NSArray *mathMLAttributes;

- (id)initWithDictionary:(id)a0;
- (id)children;
- (id)description;
- (void).cxx_destruct;
- (id)mathMLString;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 parentTreePosition:(id)a2 childIndex:(unsigned long long *)a3;
- (BOOL)hasSimpleArrayOfChildren;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)a0;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)a0;
- (id)prefixForChildAtIndex:(unsigned long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;
- (id)suffixForChildAtIndex:(unsigned long long)a0;

@end
