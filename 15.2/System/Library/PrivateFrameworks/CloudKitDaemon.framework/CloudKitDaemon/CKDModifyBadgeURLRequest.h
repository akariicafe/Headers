@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) unsigned long long badgeValue;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 badgeValue:(unsigned long long)a1;

@end
