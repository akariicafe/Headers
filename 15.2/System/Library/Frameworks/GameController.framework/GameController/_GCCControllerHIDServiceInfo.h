@class NSData, NSNumber, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCCControllerHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying> {
    NSData *_inputData;
}

@property (retain, nonatomic) NSData *inputData;
@property (readonly, nonatomic) struct __IOHIDServiceClient { } *service;
@property (readonly, nonatomic) NSNumber *registryID;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(struct __IOHIDServiceClient { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)redactedDescription;
- (void)dealloc;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
