@class NSString;
@protocol FCOperationCanceling;

@interface FCKeyedOperation : NSObject <FCOperationCanceling> {
    BOOL _cancelled;
    id<FCOperationCanceling> _cancelHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
