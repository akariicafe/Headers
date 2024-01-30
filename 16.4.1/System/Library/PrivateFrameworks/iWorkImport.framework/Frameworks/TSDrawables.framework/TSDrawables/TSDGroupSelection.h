@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection

@property (nonatomic) BOOL hasSelectedInfosInNonGroupContainer;
@property (readonly, nonatomic) NSSet *containerGroups;
@property (readonly, nonatomic) BOOL isCrossContainerSelection;

+ (Class)archivedSelectionClass;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)subclassDescription;
- (id)initWithContainerGroups:(id)a0 hasSelectedInfosInNonGroupContainer:(BOOL)a1;
- (id)initWithGroupInfo:(id)a0;

@end
