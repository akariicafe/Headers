@class TSPComponentDataReferenceMap;

@interface TSPComponentDataReferenceInfo : NSObject

@property (readonly, nonatomic) TSPComponentDataReferenceMap *componentDataReferenceMap;
@property (readonly, nonatomic) unsigned char packageIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithComponentDataReferenceMap:(id)a0 packageIdentifier:(unsigned char)a1;

@end
