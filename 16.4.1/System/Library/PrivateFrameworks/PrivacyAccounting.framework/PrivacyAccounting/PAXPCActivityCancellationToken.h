@class NSString, NSObject;
@protocol OS_xpc_object;

@interface PAXPCActivityCancellationToken : NSObject <PACancellationToken> {
    NSObject<OS_xpc_object> *_activity;
}

@property (readonly) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;

@end
