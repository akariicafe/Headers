@class NSArray;

@interface PKSearchResult : NSObject {
    void /* unknown type, empty encoding */ episodes;
    void /* unknown type, empty encoding */ shows;
}

@property (nonatomic, readonly) NSArray *episodes;
@property (nonatomic, readonly) NSArray *shows;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEpisodes:(id)a0 shows:(id)a1;

@end
