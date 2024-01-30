@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval>

@property (readonly, nonatomic) NSArray *originalObjects;
@property (readonly, nonatomic) NSArray *removedImmutableObjects;
@property (readonly, nonatomic) NSIndexSet *indexesOfRemovedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
