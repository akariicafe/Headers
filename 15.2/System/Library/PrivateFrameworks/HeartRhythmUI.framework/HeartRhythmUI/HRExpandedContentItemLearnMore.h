@protocol HRLinkTextViewDelegate;

@interface HRExpandedContentItemLearnMore : NSObject

@property (nonatomic) long long urlIdentifier;
@property (weak, nonatomic) id<HRLinkTextViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithURLIdentifier:(long long)a0 delegate:(id)a1;

@end
