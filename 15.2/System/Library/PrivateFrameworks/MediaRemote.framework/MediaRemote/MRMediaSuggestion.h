@class NSString, MRArtwork, INPlayMediaIntent;

@interface MRMediaSuggestion : NSObject {
    NSString *_bundleID;
    MRArtwork *_artwork;
    INPlayMediaIntent *_intent;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) MRArtwork *artwork;

- (id)description;
- (void)playWithCompletion:(id /* block */)a0;
- (void)playOnDeviceWithUID:(id)a0 completion:(id /* block */)a1;
- (void)playOnEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
