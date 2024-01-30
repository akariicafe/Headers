@class PPInternalRequestHandler;

@interface SGPortraitRequestHandler : NSObject <SGPortraitRequestProtocol> {
    PPInternalRequestHandler *_intRequestHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)extractionsFromUserAction:(id)a0 searchableItem:(id)a1 completion:(id /* block */)a2;
- (void)extractionsFromSearchableItems:(id)a0 completion:(id /* block */)a1;
- (id)_extractionsFromPipelineEntity:(id)a0 pipeline:(id *)a1;

@end
