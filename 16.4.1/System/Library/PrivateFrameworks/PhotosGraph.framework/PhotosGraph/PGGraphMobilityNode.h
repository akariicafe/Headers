@class NSString, MANodeFilter;

@interface PGGraphMobilityNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode> {
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long mobilityType;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (unsigned long long)mobilityTypeForMobilityLabel:(id)a0;

- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;

@end
