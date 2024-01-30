@class NSArray, NSString, NSUUID, AVAudioFormat;

@interface ATAudioTapDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tapType;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSArray *excludedPIDs;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) AVAudioFormat *format;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initProcessTapInternalWithFormat:(id)a0 PID:(int)a1;
- (id)initProcessTapWithFormat:(id)a0 PID:(int)a1;
- (id)initSystemTapWithFormat:(id)a0;
- (id)initSystemTapWithFormat:(id)a0 excludePIDs:(id)a1;
- (id)initWithCoder:(id)a0;

@end
