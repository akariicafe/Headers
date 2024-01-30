@class NSString, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying> {
    NSObject<OS_os_transaction> *_txn;
}

@property (copy, nonatomic) id /* block */ shouldDefer;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long capabilities;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForImmediateWorkWithCapabilities:(unsigned long long)a0;
- (id)initWithActivity:(id)a0 capabilities:(unsigned long long)a1 name:(id)a2;

@end
