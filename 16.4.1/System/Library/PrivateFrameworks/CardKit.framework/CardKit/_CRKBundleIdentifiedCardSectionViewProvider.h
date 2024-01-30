@class NSString, NSArray;
@protocol CRKCardSectionViewProviding, CRCard;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<CRKCardSectionViewProviding> realCardSectionViewProvider;
@property (readonly, nonatomic) id<CRCard> card;
@property (readonly, nonatomic) NSArray *viewConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
