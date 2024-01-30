@class NSString, GEOMapItemIdentifier, GEOPDChildPlace;

@interface GEOMapItemChildPlace : NSObject {
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChildPlace:(id)a0;

@end
