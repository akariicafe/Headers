@class NSDictionary;

@interface LPiTunesMediaLookupItemArtwork : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;

+ (id)colorForColorKind:(id)a0 inColorDictionary:(id)a1;

- (void).cxx_destruct;
- (id)colors;
- (id)URLWithHeight:(long long)a0 width:(long long)a1 cropStyle:(id)a2 format:(id)a3;
- (id)initWithDictionary:(id)a0;

@end
