@interface MTRReadClientContainer : NSObject

@property (nonatomic) void *readClientPtr;
@property (nonatomic) struct AttributePathParams { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; } *pathParams;
@property (nonatomic) struct EventPathParams { unsigned int x0; unsigned int x1; unsigned short x2; BOOL x3; } *eventPathParams;
@property (nonatomic) unsigned long long deviceID;

- (void)dealloc;
- (void)onDone;

@end
