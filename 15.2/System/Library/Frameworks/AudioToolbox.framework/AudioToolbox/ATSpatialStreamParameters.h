@class NSUUID, AVAudioFormat;

@interface ATSpatialStreamParameters : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) AVAudioFormat *format;

- (id)description;
- (void)disableStream;
- (id)initInternalWithFormat:(id)a0;
- (BOOL)enableStreamWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
