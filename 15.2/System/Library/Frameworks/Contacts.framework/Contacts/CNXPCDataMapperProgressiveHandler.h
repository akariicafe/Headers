@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
}

- (void)completedWithError:(id)a0;
- (void)receiveProgressiveContacts:(id)a0 matchInfos:(id)a1;
- (id)initWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
