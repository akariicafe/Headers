@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _ACPluginDB : NSObject <NSSecureCoding> {
    NSMutableDictionary *mSearchDirectories;
    BOOL mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> { struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (AudioComponentVector &, AudioComponentVector &)> *__f_; } __f_; } mNotificationCallback;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void ()> *__f_; } __f_; } mScanHashCallback;
    NSData *mCarbonComponentHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)path;

- (id)init;
- (void).cxx_destruct;
- (void)writeIfDirty;
- (void)initialScanDirectory:(id)a0 priority:(int)a1 components:(struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } *)a2;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; })postInit:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
