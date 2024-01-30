@class NSArray, NSString, SUICKPFeedbackDelegateDemultiplexer;
@protocol CRKCardSectionViewProviderDelegate, CRCard;

@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {
    SUICKPFeedbackDelegateDemultiplexer *_feedbackDelegateDemux;
}

@property (weak, nonatomic) id<CRKCardSectionViewProviderDelegate> delegate;
@property (readonly, nonatomic) id<CRCard> card;
@property (readonly, nonatomic) NSArray *viewConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;

- (void).cxx_destruct;
- (id)initWithCard:(id)a0;
- (unsigned long long)displayPriorityForCardSection:(id)a0;

@end
