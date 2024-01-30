@class NSData;

@interface ICFPStreamContext : NSObject {
    struct FPStreamOpaque_ { } *_fpStreamRef;
}

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, copy, nonatomic) NSData *playerInfoContextRequestData;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVersion:(unsigned int)a0 contextID:(unsigned int)a1 contentInfo:(id)a2 returningError:(id *)a3;
- (BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)a0 returningData:(id *)a1 error:(id *)a2;
- (BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)a0 returningData:(id *)a1 error:(id *)a2;

@end
