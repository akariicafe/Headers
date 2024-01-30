@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {
    long long _invalidationIgnoreCount;
    long long _numberOfIgnoredInvalidations;
}

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL usesSections;
@property (readonly, nonatomic) BOOL showsIndexBar;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) BOOL showsEntityCountFooter;
@property (readonly, nonatomic) NSString *entityCountFormat;

+ (Class)invalidationContextClass;

- (id)entities;
- (id)_indexPathForGlobalIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_globalIndexForIndexPath:(id)a0;
- (id)initWithEntityType:(long long)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isIgnoringInvalidation;
- (id)entityAtIndex:(unsigned long long)a0;
- (void)_invalidateCalculatedEntities;
- (void)invalidateWithContext:(id)a0;
- (BOOL)canEditEntityAtIndex:(unsigned long long)a0;
- (BOOL)canSelectEntityAtIndex:(unsigned long long)a0;
- (void)deleteEntityAtIndex:(unsigned long long)a0;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)a0;
- (id)localizedSectionTitleAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSectionAtIndex:(unsigned long long)a0;
- (void)_willInvalidateWithContext:(id)a0;
- (void)_didInvalidateWithContext:(id)a0;
- (id)sectionEntities;
- (id)anyEntity;
- (BOOL)canEditEntityAtIndexPath:(id)a0;
- (void)deleteEntityAtIndexPath:(id)a0;
- (long long)editingTypeForEntityAtIndexPath:(id)a0;
- (id)entityAtIndexPath:(id)a0;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfEntity:(id)a0;
- (void)beginIgnoringInvalidation;
- (void)endIgnoringInvalidation;
- (id)playbackContextForIndex:(unsigned long long)a0;
- (void)preloadEntities;
- (void)preloadSectionEntities;
- (id)sectionEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfSectionEntity:(id)a0;

@end
