@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler {
    id /* block */ _correlating;
}

- (void)receivePriorEvent:(id)a0;
- (id)correlateWithCurrentEvent:(id)a0;
- (void)receiveCurrentEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCorrelating:(id /* block */)a0;

@end
