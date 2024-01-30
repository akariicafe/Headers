@class EMSenderRepository, EFFuture;

@interface MUISearchSenderQueryManager : NSObject {
    EMSenderRepository *_senderRepository;
    EFFuture *_senderFilterQueryFuture;
}

@property (readonly, nonatomic) EFFuture *senderFilterQueryFuture;

- (void).cxx_destruct;
- (id)initWithSenderRepository:(id)a0;

@end
