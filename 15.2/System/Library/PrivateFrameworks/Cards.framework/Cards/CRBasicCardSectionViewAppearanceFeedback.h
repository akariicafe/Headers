@class NSString, SFFeedback;
@protocol CRCardSection;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback>

@property (retain, nonatomic) id<CRCardSection> cardSection;
@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
