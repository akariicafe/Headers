@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject

@property (readonly, nonatomic) HKAuthorizationRequestRecord *record;
@property (readonly, copy, nonatomic) id /* block */ requestSentHandler;
@property (readonly, copy, nonatomic) id /* block */ requestFinishedHandler;

- (void).cxx_destruct;
- (id)initWithRequestRecord:(id)a0 requestSentHandler:(id /* block */)a1 requestFinishedHandler:(id /* block */)a2;

@end
