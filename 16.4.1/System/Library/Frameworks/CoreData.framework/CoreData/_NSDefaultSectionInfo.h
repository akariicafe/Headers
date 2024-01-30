@class NSString, NSArray, NSFetchedResultsController;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
    NSFetchedResultsController *_controller;
    unsigned long long _sectionOffset;
    unsigned long long _oldSectionNumber;
    NSArray *_sectionObjects;
}

@property (readonly, nonatomic) id sectionId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *indexTitle;
@property (readonly, nonatomic) unsigned long long numberOfObjects;
@property (readonly, nonatomic) NSArray *objects;

- (void)dealloc;

@end
