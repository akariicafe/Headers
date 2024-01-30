@class PGGraphNode, PGGraphBusinessNode, PGGraphPersonNode, PGGraphLocationCityNode, PGGraphAddressNode;
@protocol PGGraphLocationOrArea;

@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator {
    long long _type;
    PGGraphLocationCityNode *_cityNode;
    PGGraphBusinessNode *_businessNode;
    PGGraphPersonNode *_personNode;
    PGGraphAddressNode *_addressNode;
    PGGraphNode<PGGraphLocationOrArea> *_tripLocationNode;
    unsigned long long _tripTitleLocationType;
}

- (id)_typeString;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_timeTitleForTripAndWeekend;
- (id)initWithMomentNodes:(id)a0 cityNode:(id)a1;
- (id)initWithMomentNodes:(id)a0 businessNode:(id)a1;
- (id)initWithMomentNodes:(id)a0 personNode:(id)a1;
- (id)initWithMomentNodes:(id)a0 addressNode:(id)a1;
- (id)initWithMomentNodes:(id)a0 tripLocationNode:(id)a1 tripTitleLocationType:(unsigned long long)a2;

@end
