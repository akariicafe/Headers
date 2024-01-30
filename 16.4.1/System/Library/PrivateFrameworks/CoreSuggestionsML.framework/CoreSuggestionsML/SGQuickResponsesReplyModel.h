@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject

@property (readonly, nonatomic) unsigned long long semanticClassIndex;
@property (readonly, nonatomic) NSArray *semanticClasses;
@property (readonly, nonatomic) NSArray *selectedPseudocounts;
@property (readonly, nonatomic) double scoreWeight;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) BOOL dynamicLabel;

+ (id)semanticClassesForArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(unsigned long long)a1;

@end
