@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _PASNotificationDescriptor : NSObject {
    _Atomic BOOL isCanceled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
