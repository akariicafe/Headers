@class NSString;

@interface _ECMessageBodyConsumableNewline : NSObject <ECMessageBodyConsumableInnerTextNode>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end
