@class NSNumber, NSUUID, NSValue;

@interface CXScreenShareAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (nonatomic, getter=isWindowed) BOOL windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (copy, nonatomic) NSValue *originalResolution;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end
