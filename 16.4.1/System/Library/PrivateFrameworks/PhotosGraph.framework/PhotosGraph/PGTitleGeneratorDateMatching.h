@class NSSet, PGTitle, PGGraph, NSDateInterval, PGTitleGenerationContext, NSString;

@interface PGTitleGeneratorDateMatching : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
    NSString *_holidayName;
}

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *dateNodes;
@property (readonly, nonatomic) BOOL isForHighlight;
@property (readonly, nonatomic) unsigned long long lineBreakBehavior;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) unsigned long long allowedTimeTitleFormats;
@property (readonly, nonatomic) NSDateInterval *referenceDateInterval;
@property (readonly, nonatomic) NSSet *momentNodes;

+ (id)_typeMatchings;
+ (BOOL)type:(long long)a0 isBetterThanType:(long long)a1;

- (void).cxx_destruct;
- (BOOL)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
- (long long)_findBestType;
- (long long)_matchingTypeForDateNode:(id)a0;
- (id)initWithType:(long long)a0 referenceDateInterval:(id)a1 highlightNode:(id)a2 titleGenerationContext:(id)a3;
- (id)initWithType:(long long)a0 referenceDateInterval:(id)a1 momentNodes:(id)a2 lineBreakBehavior:(unsigned long long)a3 isForHighlight:(BOOL)a4 titleGenerationContext:(id)a5;
- (id)initWithType:(long long)a0 referenceDateInterval:(id)a1 momentNodes:(id)a2 titleGenerationContext:(id)a3;

@end
