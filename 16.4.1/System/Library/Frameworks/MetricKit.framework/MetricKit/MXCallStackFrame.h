@class NSString, NSUUID, NSArray, NSNumber;

@interface MXCallStackFrame : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *binaryName;
@property (readonly) NSNumber *address;
@property (readonly) NSUUID *binaryUUID;
@property (readonly) NSNumber *offsetInBinary;
@property (readonly) NSNumber *sampleCount;
@property (retain) NSArray *subFrames;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBinaryName:(id)a0 binaryUUID:(id)a1 address:(id)a2 binaryOffset:(id)a3 sampleCount:(id)a4 withDepth:(unsigned long long)a5 subFrameArray:(id)a6;

@end
