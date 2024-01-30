@class NSSet, NSArray;

@interface PGGraphMatchingOptions : NSObject

@property (nonatomic) unsigned long long relatedType;
@property (nonatomic) unsigned short targetEventDomain;
@property (retain, nonatomic) NSSet *focusedNodes;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) BOOL needsKeywords;

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
