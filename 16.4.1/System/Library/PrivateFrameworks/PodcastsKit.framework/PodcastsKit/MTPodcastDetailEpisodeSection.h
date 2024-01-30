@class NSString, NSPredicate, NSArray;
@protocol MTFetchedResultsControllerProtocol, MTPodcastDetailEpisodeSectionDelegate;

@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate>

@property (retain, nonatomic) id<MTFetchedResultsControllerProtocol> frc;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long sectionType;
@property (nonatomic) BOOL showTitleWithNoEpisodes;
@property (weak, nonatomic) id<MTPodcastDetailEpisodeSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependentPropertyKeys;

- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;
- (void)controllerWillChangeContent:(id)a0;
- (void).cxx_destruct;
- (void)loadData;
- (id)episodes;
- (unsigned long long)indexOfEpisode:(id)a0;
- (void)initializeFrc;

@end
