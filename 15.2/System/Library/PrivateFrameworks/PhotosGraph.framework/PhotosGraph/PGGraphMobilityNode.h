@class NSString, MANodeFilter;

@interface PGGraphMobilityNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode> {
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long mobilityType;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (unsigned long long)mobilityTypeForMobilityLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
