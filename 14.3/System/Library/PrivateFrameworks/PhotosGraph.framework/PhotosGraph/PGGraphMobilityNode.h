@class NSString;

@interface PGGraphMobilityNode : PGGraphPropertylessNode {
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long mobilityType;

+ (unsigned long long)mobilityTypeForMobilityLabel:(id)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
