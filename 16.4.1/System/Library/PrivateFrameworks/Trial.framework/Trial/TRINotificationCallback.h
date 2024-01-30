@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TRINotificationCallback : NSObject <TRINotificationToken>

@property (readonly) unsigned long long id;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
