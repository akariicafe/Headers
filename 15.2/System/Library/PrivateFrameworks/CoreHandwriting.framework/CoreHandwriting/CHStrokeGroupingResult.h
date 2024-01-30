@class NSSet, NSArray;

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSArray *_textStrokeGroupClusters;
    NSArray *_strokeGroupClusters;
    NSSet *_textStrokeGroups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeGroups;
@property (readonly, copy, nonatomic) NSSet *createdStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *deletedStrokeGroups;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedTopBottomLeftRight;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property (readonly, copy, nonatomic) NSArray *strokeGroupsSortedByWritingOrientation;
@property (readonly, copy, nonatomic) NSArray *strokeGroupClusters;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupClusters;
@property (readonly, copy, nonatomic) NSSet *textStrokeGroups;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2;
- (id)_sortedStrokeGroupsByWritingOrientationTextOnly:(BOOL)a0;
- (BOOL)isEqualToStrokeGroupingResult:(id)a0;

@end
