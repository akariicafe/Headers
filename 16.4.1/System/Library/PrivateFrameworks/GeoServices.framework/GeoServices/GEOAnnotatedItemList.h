@class NSString, GEOMapItemAttribution;
@protocol GEOPictureItemContainer, GEOTextItemContainer;

@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList>

@property (readonly, nonatomic) id<GEOPictureItemContainer> pictureItemContainer;
@property (readonly, nonatomic) id<GEOTextItemContainer> textItemContainer;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) int annotatedItemStyle;
@property (readonly, nonatomic) GEOMapItemAttribution *attribution;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAnnotatedItemList:(id)a0 attribution:(id)a1;
- (id)initWithPictureItemContainer:(id)a0 textItemContainer:(id)a1 title:(id)a2 annotatedItemStyle:(int)a3 attribution:(id)a4;

@end
