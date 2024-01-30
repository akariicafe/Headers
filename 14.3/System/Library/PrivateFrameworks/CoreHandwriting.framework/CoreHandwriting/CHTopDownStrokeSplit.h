@class NSArray;

@interface CHTopDownStrokeSplit : NSObject

@property (readonly, retain, nonatomic) NSArray *strokeGroup1;
@property (readonly, retain, nonatomic) NSArray *strokeGroup2;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } groupBounds1;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } groupBounds2;
@property (readonly, nonatomic) double transitionTime;
@property (readonly, retain, nonatomic) NSArray *orderedStrokes;
@property (readonly, retain, nonatomic) NSArray *orderedStrokesGroup1;
@property (readonly, retain, nonatomic) NSArray *orderedStrokesGroup2;
@property (readonly, nonatomic) long long substrokeCount1;
@property (readonly, nonatomic) long long substrokeCount2;

+ (id)writingDirectionOrderedStrokes:(id)a0 substrokesByStrokeIdentifier:(id)a1;

- (void)dealloc;
- (long long)_substrokeCountForStrokes:(id)a0 substrokesByStrokeIdentifier:(id)a1;
- (id)initWithStrokes:(id)a0 substrokesByStrokeIdentifier:(id)a1 splitIndex:(long long)a2;

@end
