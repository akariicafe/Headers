@class NSArray, PXPhotoLibraryLocalDefaults, NSNumber, PHPerson;
@protocol PXFastEnumeration;

@interface PXMovePersonAction : PXPhotosAction

@property (readonly, nonatomic) PHPerson *sourcePerson;
@property (readonly, nonatomic) id<PXFastEnumeration> destinationPeople;
@property (readonly, nonatomic) long long destinationIndex;
@property (readonly, nonatomic) long long destinationType;
@property (copy, nonatomic) NSArray *modifiedDestinationPeople;
@property (readonly, nonatomic) id<PXFastEnumeration> otherPeople;
@property (copy, nonatomic) NSArray *modifiedOtherPeople;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSNumber *sourceSortingType;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (void)changeRequestForUndo:(id)a0;
- (id)initWithSourcePerson:(id)a0 destinationPeople:(id)a1 destinationIndex:(long long)a2 destinationType:(long long)a3 otherPeople:(id)a4;
- (void)performUndo:(id /* block */)a0;

@end
