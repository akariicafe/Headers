@class NSString, SFFeedback;
@protocol CRCard;

@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback>

@property (retain, nonatomic) id<CRCard> baseCard;
@property (retain, nonatomic) id<CRCard> requestedCard;
@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
