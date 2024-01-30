@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CLSSaveResponse : NSObject <CLSSaveResponse> {
    NSMutableDictionary *_objectsByID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (oneway void)clientRemote_deliverObject:(id)a0;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_saveDone:(id)a0;
- (id)savedObjectWithObjectID:(id)a0;

@end
