@class NSString, GEOMapItemAttribution;

@interface MUPlaceDescriptionConfiguration : NSObject

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) GEOMapItemAttribution *attribution;

+ (id)configurationWithEncyclopedicInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 descriptionText:(id)a1 attribution:(id)a2;

@end
