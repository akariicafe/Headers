@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)completedWithError:(id)a0;
- (id)initWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)receiveProgressiveContacts:(id)a0 matchInfos:(id)a1;

@end
