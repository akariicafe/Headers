@class NTKFaceSupportDateDatabase, NSMapTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSupportNotificationActionEventRecorder : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *lookup;
@property (readonly, nonatomic) NTKFaceSupportDateDatabase *database;
@property (readonly, nonatomic) NSString *filePath;

- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (void)endPresentationForIdentifier:(id)a0 withAction:(long long)a1 completion:(id /* block */)a2;
- (void)beginPresentationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_validateIdentifier:(id)a0;
- (void)_queue_beginPresentationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_queue_endPresentationForIdentifier:(id)a0 withAction:(long long)a1 completion:(id /* block */)a2;

@end
