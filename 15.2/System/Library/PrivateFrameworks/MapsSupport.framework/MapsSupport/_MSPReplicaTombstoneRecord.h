@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy {
    id<MSPReplicaRecord> _record;
}

- (id)contentsTimestamp;
- (id)_initWithRecord:(id)a0;
- (id)contents;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
