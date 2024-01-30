@class NSString, MRMediaSuggestion, UIImage, MPArtworkCatalog;

@interface MRUMediaSuggestion : NSObject

@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (retain, nonatomic) MRMediaSuggestion *mediaSuggestion;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithMediaSuggestion:(id)a0;
- (id)initWithNowPlaying:(id)a0 title:(id)a1 subtitle:(id)a2 artworkCatalog:(id)a3 iconImage:(id)a4;

@end
