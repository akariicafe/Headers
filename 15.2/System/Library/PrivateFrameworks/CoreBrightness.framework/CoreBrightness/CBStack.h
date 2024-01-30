@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CBStack : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property unsigned long long length;
@property (readonly, nonatomic) id objectToPop;
@property (readonly, nonatomic) NSMutableArray *stack;

- (void)clear;
- (id)initWithLength:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id)popObj;
- (void)pushObj:(id)a0;
- (void)printStack;

@end
