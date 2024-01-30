@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXExpectation : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSDate *creationDate;

- (id)initWithQueue:(id)a0;
- (void)fulfill;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLabelFormat:(id)a0;
- (id)initWithQueue:(id)a0 labelFormat:(id)a1;
- (void)performWhenFulfilled:(id /* block */)a0 timeout:(double)a1;
- (void)_performHandlerWithSuccess:(BOOL)a0 error:(id)a1;

@end
