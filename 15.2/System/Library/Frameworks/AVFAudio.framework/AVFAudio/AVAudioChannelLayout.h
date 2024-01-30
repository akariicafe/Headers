@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {
    unsigned int _layoutTag;
    struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *_layout;
    void *_reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int layoutTag;
@property (readonly, nonatomic) const struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *layout;
@property (readonly, nonatomic) unsigned int channelCount;

+ (id)layoutWithLayoutTag:(unsigned int)a0;
+ (id)layoutWithLayout:(const struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *)a0;

- (unsigned long long)layoutSize;
- (id)initWithLayout:(const struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithLayoutTag:(unsigned int)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
