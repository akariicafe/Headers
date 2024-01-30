@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CUServer : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ acceptHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidated;
- (id)description;
- (void)activate;
- (void)invalidate;

@end
