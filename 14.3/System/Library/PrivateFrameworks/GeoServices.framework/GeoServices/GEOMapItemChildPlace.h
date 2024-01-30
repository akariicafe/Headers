@class NSString, GEOMapItemIdentifier, GEOPDChildPlace;

@interface GEOMapItemChildPlace : NSObject {
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildPlace:(id)a0;

@end
