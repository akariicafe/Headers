@class NSString, NSObject;
@protocol OS_xpc_object;

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {
    NSObject<OS_xpc_object> *_message;
}

@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (readonly, nonatomic) NSString *photoIdentifier;
@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *parent;

- (void)dealloc;
- (id)initWithApplicationID:(id)a0 captureRequstIdentifier:(id)a1 photoIdentifier:(id)a2 message:(id)a3 parent:(id)a4;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
