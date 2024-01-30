@class NSArray, NSString;
@protocol CRCard;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>

@property (readonly, nonatomic) id<CRCard> card;
@property (readonly, nonatomic) NSArray *viewConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;

@end
