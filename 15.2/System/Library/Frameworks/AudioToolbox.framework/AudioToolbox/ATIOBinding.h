@class NSString, AVAudioSession;

@interface ATIOBinding : NSObject <NSSecureCoding> {
    struct shared_ptr<const AT::IOBinding::Impl> { struct Impl *__ptr_; struct __shared_weak_count *__cntrl_; } mImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) AVAudioSession *session;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, retain, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic) unsigned int deviceID;

- (id)initWithDeviceID:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImpl:(struct shared_ptr<const AT::IOBinding::Impl> { struct Impl *x0; struct __shared_weak_count *x1; })a0;
- (id)description;
- (id)initWithAudioSessionID:(unsigned int)a0;
- (id)initWithDeviceUID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAudioSession:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
