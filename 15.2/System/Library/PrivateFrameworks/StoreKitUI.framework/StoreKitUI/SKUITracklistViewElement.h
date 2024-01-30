@class NSArray, NSMutableArray, SKUIHeaderViewElement;

@interface SKUITracklistViewElement : SKUIViewElement {
    NSMutableArray *_sections;
    NSMutableArray *_tracks;
}

@property (readonly, nonatomic) SKUIHeaderViewElement *header;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (void)enumerateTracksUsingBlock:(id /* block */)a0;

@end
