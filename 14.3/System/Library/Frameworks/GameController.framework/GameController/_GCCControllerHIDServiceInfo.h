@class NSData, NSNumber, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCCControllerHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying> {
    NSData *_inputData;
    BOOL _isPreallocatedSiriRemote;
}

@property (retain, nonatomic) NSData *inputData;
@property (nonatomic) BOOL isPreallocatedSiriRemote;
@property (readonly, nonatomic) struct __IOHIDServiceClient { } *service;
@property (readonly, nonatomic) NSNumber *registryID;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
