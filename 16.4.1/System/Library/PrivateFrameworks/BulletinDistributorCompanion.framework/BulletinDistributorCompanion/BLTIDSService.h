@class NSString, IDSService;
@protocol BLTAbstractIDSDevice;

@interface BLTIDSService : NSObject <BLTAbstractIDSService> {
    IDSService *_service;
}

@property (readonly, nonatomic) id<BLTAbstractIDSDevice> defaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (BOOL)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setProtobufAction:(SEL)a0 forIncomingRequestsOfType:(unsigned short)a1;
- (void)setProtobufAction:(SEL)a0 forIncomingResponsesOfType:(unsigned short)a1;
- (BOOL)sendResourceAtURL:(id)a0 metadata:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;

@end
