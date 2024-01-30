@class CRSCardRequest;
@protocol CRCard;

@interface CRSCardResponse : CRSResponse

@property (retain, nonatomic) CRSCardRequest *request;
@property (retain, nonatomic) id<CRCard> card;

- (void).cxx_destruct;

@end
