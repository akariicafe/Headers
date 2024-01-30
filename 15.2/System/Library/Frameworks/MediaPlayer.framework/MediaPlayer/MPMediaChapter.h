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

- (id)artworkCatalog;
- (long long)_sortByChapterIndex:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)title;
- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithCoder:(id)a0;

@end
