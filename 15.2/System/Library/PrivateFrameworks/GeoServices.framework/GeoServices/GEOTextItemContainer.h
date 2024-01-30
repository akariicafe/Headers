@class NSArray;
@protocol GEOTextItemDisplayConfig;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer>

@property (readonly, nonatomic) id<GEOTextItemDisplayConfig> displayConfig;
@property (readonly, nonatomic) NSArray *textItems;

- (id)initWithDisplayConfig:(id)a0 textItems:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTextItemContainer:(id)a0;

@end
