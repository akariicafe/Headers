@class MPCPlayerCommandRequest, MPCPlayerCommandStatus, NSDate;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCPlayerCommandRequest *request;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSDate *sendDate;
@property (readonly, nonatomic) MPCPlayerCommandStatus *status;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithCommandRequest:(id)a0 options:(unsigned long long)a1 sendDate:(id)a2;

@end
