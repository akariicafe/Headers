@class NSNumber, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _GCHIDServiceInfo : NSObject <NSCopying> {
    NSData *_inputData;
}

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;

- (id)redactedDescription;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
