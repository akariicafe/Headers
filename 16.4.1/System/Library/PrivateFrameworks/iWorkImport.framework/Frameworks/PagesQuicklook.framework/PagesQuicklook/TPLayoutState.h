@class NSArray, NSSet;

@interface TPLayoutState : NSObject <NSCopying>

@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long sectionPageIndex;
@property (nonatomic) unsigned long long documentPageIndex;
@property (nonatomic) unsigned long long lastPageCount;
@property (copy, nonatomic) NSArray *sectionHints;
@property (nonatomic) unsigned long long bodyLength;
@property (copy, nonatomic) NSSet *missingFonts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)archivedLayoutStateInContext:(id)a0;
- (BOOL)isEqualToLayoutState:(id)a0;

@end
