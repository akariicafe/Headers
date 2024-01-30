@class NSString, NSArray;

@interface HFSimpleDiffableItemGroup : NSObject <HFDiffableItemGroup, NSCopying>

@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSArray *diffableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
