@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)nextTombstoneEvent;
- (id)peekEvent;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)peekTombstoneEvent;
- (id)nextEvent;
- (id)_originaleventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;

@end
