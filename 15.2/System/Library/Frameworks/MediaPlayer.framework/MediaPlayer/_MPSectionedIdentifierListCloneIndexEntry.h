@class NSMutableSet, MPSectionedIdentifierListItemEntry;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject

@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (retain, nonatomic) NSMutableSet *clonedEntries;

- (void).cxx_destruct;
- (id)init;

@end
