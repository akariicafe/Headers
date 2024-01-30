@class NSString, NSNumber, NSMutableDictionary;

@interface MLMovieArtist : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *ITunesStoreIdentifier;

- (void)_setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValueCopy:(id)a0 forKey:(id)a1;
- (id)initWithMovieArtistDictionary:(id)a0;
- (id)copyMovieArtistDictionary;

@end
