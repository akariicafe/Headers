@class NSString, SKUIColorScheme;
@protocol SKUIArtworkProviding;

@interface SKUIUber : NSObject

@property (readonly, nonatomic) id<SKUIArtworkProviding> artworkProvider;
@property (readonly, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithUberDictionary:(id)a0;

@end
