@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject {
    id /* block */ _block;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSDate *fireDate;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithFireDate:(id)a0 queue:(id)a1 target:(id)a2 selector:(SEL)a3;
- (id)initWithFireDate:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
