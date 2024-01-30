@class MPMediaLibraryArtworkDataSource, MPMediaLibraryArtworkRequest;

@interface MPMediaChapter : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) id /* block */ valueLoader;
@property (nonatomic) long long chapterType;
@property (nonatomic) double playbackTime;
@property (nonatomic) double playbackDuration;
@property (nonatomic) unsigned long long indexInChaptersWithSameType;
@property (nonatomic) unsigned long long indexInChaptersWithAnyType;
@property (retain, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (weak, nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)duration;
- (long long)_sortByChapterIndex:(id)a0;
- (id)title;
- (void)encodeWithCoder:(id)a0;

@end
