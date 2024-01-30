@class NSArray;

@interface AVAudioSemantics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *channelGroups;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAudioSemantics:(struct __CFArray { } *)a0;
- (id)initWithChannelGroups:(id)a0;

@end
