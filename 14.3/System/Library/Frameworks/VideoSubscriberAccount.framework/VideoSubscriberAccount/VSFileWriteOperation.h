@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSOptional *data;
@property (retain, nonatomic) VSOptional *destination;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
