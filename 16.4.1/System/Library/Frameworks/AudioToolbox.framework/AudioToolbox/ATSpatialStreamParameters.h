@class NSUUID, AVAudioFormat;

@interface ATSpatialStreamParameters : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) AVAudioFormat *format;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)disableStream;
- (BOOL)enableStreamWithIdentifier:(id)a0 error:(id *)a1;
- (id)initInternalWithFormat:(id)a0;

@end
