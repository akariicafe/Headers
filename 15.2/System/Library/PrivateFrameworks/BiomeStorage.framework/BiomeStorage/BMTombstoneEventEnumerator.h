@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)peekEvent;
- (id)nextEvent;
- (id)_originaleventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)nextTombstoneEvent;
- (id)peekTombstoneEvent;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;

@end
