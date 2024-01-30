@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (void)didEnd;
- (void)dealloc;
- (void)willEnd;
- (id)description;
- (void)didBegin;
- (void).cxx_destruct;
- (id)_reactorQueue;

@end
