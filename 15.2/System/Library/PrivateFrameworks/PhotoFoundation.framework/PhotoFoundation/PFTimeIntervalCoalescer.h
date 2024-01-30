@interface PFTimeIntervalCoalescer : NSObject {
    _Atomic long long _sequenceNumber;
    long long _fireSequenceNumber;
}

- (void)dispatch_after:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;

@end
