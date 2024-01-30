@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditReplacement : _MSPContainerEdit <MSPContainerEditReplacement>

@property (readonly, nonatomic) NSArray *originalObjects;
@property (readonly, nonatomic) NSArray *replacementObjects;
@property (readonly, nonatomic) NSArray *originalImmutableObjects;
@property (readonly, nonatomic) NSArray *replacementImmutableObjects;
@property (readonly, nonatomic) NSIndexSet *indexesOfReplacedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
