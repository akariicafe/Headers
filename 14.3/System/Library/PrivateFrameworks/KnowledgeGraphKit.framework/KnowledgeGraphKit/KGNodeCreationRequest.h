@class NSArray, NSDictionary, NSNumber, KGNodePlaceholder;

@interface KGNodeCreationRequest : KGNodeChangeRequest {
    NSNumber *_weight;
    NSDictionary *_properties;
}

@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) KGNodePlaceholder *placeholderForNode;

+ (id)creationRequestWithLabels:(id)a0 weight:(id)a1 properties:(id)a2;

- (void)setProperties:(id)a0;
- (void)setWeight:(id)a0;
- (id)properties;
- (void).cxx_destruct;
- (id)weight;

@end
