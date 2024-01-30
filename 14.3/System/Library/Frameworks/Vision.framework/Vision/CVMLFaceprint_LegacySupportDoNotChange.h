@class NSData, NSString;

@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *faceprint;
@property (copy) NSString *key;
@property unsigned int platform;
@property unsigned int profile;
@property (copy) NSString *faceprintInputPath;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
