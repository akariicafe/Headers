@class GEOMapItemIdentifier, GEOPDContainmentPlace;
@protocol GEOServerFormattedString;

@interface GEOEnclosingPlace : NSObject {
    GEOPDContainmentPlace *_enclosingPlace;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *parentIdentifier;
@property (readonly, nonatomic) id<GEOServerFormattedString> containmentTextTemplate;

- (id)initWithContainmentPlace:(id)a0;
- (void).cxx_destruct;

@end
