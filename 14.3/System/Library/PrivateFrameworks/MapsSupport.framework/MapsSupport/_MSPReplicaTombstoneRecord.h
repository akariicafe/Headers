@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy {
    id<MSPReplicaRecord> _record;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)contents;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)contentsTimestamp;
- (id)_initWithRecord:(id)a0;

@end
