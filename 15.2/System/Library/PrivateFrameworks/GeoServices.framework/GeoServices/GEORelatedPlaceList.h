@class NSArray;

@interface GEORelatedPlaceList : NSObject {
    NSArray *_placeTemplates;
    int _type;
}

@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly, nonatomic) NSArray *placeTemplates;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long numberOfInlineItems;
@property (readonly, nonatomic) NSArray *mapIdentifiers;

- (id)initWithTemplates:(id)a0 type:(int)a1 hasInitialData:(BOOL)a2 numberOfInlineItem:(unsigned long long)a3;
- (id)initWithRelatedPlace:(id)a0;
- (id)initWithTemplatePlace:(id)a0 attributedMap:(id)a1;
- (void).cxx_destruct;

@end
