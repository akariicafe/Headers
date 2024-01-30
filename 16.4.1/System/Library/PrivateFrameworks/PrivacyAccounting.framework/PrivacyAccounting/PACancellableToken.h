@class NSString;

@interface PACancellableToken : NSObject <PACancellationToken> {
    _Atomic BOOL _cancelled;
}

@property (readonly) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;

@end
