@class ML3MusicLibrary, NSObject;
@protocol OS_xpc_object;

@interface ML3MaintenanceTasksOperation : NSOperation

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;

- (void)main;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 activity:(id)a1;

@end
