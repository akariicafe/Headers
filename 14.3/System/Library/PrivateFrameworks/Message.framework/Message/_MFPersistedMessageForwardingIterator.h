@class NSString, NSMutableIndexSet;

@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable> {
    _Atomic BOOL _cancelled;
}

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSMutableIndexSet *messageSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)handleMessage:(id)a0;
- (void)flush;
- (id)initWithHandler:(id /* block */)a0;

@end
