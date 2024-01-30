@class NSString;

@interface NSFilePresenterOperationRecord : NSObject

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property id reactor;

+ (id)operationRecordWithDescription:(id)a0;

- (void)didEnd;
- (void)willEnd;
- (void)didBegin;
- (void)dealloc;
- (id)_reactorQueue;
- (id)description;

@end
