@class VSSpeechRequest;

@interface MNDurationRequestKey : NSObject <NSCopying>

@property (readonly, nonatomic) VSSpeechRequest *speechRequest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSpeechRequest:(id)a0;

@end
