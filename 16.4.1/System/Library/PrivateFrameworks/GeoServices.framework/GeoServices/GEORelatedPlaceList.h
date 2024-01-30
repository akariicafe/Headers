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

- (void).cxx_destruct;
- (id)initWithRelatedPlace:(id)a0;
- (id)initWithTemplatePlace:(id)a0 attributedMap:(id)a1;
- (id)initWithTemplates:(id)a0 type:(int)a1 hasInitialData:(BOOL)a2 numberOfInlineItem:(unsigned long long)a3;

@end
