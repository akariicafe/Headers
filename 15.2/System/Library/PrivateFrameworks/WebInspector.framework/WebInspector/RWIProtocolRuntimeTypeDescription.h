@class NSString, NSArray, RWIProtocolRuntimeTypeSet;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSString *leastCommonAncestor;
@property (retain, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;
@property (copy, nonatomic) NSArray *structures;
@property (nonatomic) BOOL isTruncated;

- (id)initWithIsValid:(BOOL)a0;

@end
