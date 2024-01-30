@class NSString, NSMutableIndexSet;

@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable> {
    _Atomic BOOL _cancelled;
    id /* block */ _handler;
}

@property (readonly, nonatomic) NSMutableIndexSet *messageSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
