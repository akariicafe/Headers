@class NSSet, CHEncodedStrokeIdentifier, NSString;

@interface CHStrokeGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long uniqueIdentifier;
@property (readonly, nonatomic) long long ancestorIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } firstStrokeOrigin;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } averageWritingOrientation;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *firstStrokeIdentifier;
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *lastStrokeIdentifier;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) double groupingConfidence;
@property (readonly, nonatomic) NSString *strategyIdentifier;

+ (id)strokeIdentifierToGroupIndexMappingForStrokeIdentifiers:(id)a0 orderedStrokeGroups:(id)a1;
+ (id)strokeGroupsClusteredByProximity:(id)a0;
+ (long long)_newStrokeGroupUniqueIdentifier;
+ (double)_averageInterStrokeGroupDistanceForSortedStrokeGroups:(id)a0 outStdDev:(double *)a1;
+ (id)strokeGroupContainingStrokeIdentifier:(id)a0 strokeGroups:(id)a1 foundStrokeGroupIndex:(long long *)a2;
+ (BOOL)isStrokeGroupSet:(id)a0 equivalentToStrokeGroupSet:(id)a1;
+ (id)strokeGroupContainingStrokeIdentifier:(id)a0 strokeGroups:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)groupByAddingStrokeIdentifiers:(id)a0 removingStrokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 groupingConfidence:(double)a6 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a7;
- (const struct CGPath { } *)newEstimatedBaselineForStrokesWithTokens:(id)a0 tokenStrokeIdentifiers:(id)a1;
- (id)initWithStrokeIdentifiers:(id)a0 firstStrokeIdentifier:(id)a1 lastStrokeIdentifier:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 classification:(long long)a4 groupingConfidence:(double)a5 strategyIdentifier:(id)a6 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a7;
- (BOOL)isEquivalentToStrokeGroup:(id)a0;
- (id)initWithAncestorIdentifier:(long long)a0 strokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 groupingConfidence:(double)a6 strategyIdentifier:(id)a7 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a8;
- (id)initWithUniqueIdentifier:(long long)a0 ancestorIdentifier:(long long)a1 strokeIdentifiers:(id)a2 firstStrokeIdentifier:(id)a3 lastStrokeIdentifier:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 classification:(long long)a6 groupingConfidence:(double)a7 strategyIdentifier:(id)a8 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a9;
- (BOOL)isEqualToStrokeGroup:(id)a0;

@end
