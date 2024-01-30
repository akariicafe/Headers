@class NSArray, NSSet;

@interface PXSharedLibraryParticipantDataSource : PXSectionedDataSource

@property (retain, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSSet *emailAddresses;
@property (readonly, nonatomic) NSSet *phoneNumbers;
@property (readonly, nonatomic) NSSet *participantAddresses;
@property (readonly, nonatomic) NSArray *participantImageCombinerItems;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)itemAtIndex:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (void).cxx_destruct;
- (long long)numberOfParticipants;
- (id)_initWithParticipants:(id)a0;
- (BOOL)canAddParticipants;

@end
