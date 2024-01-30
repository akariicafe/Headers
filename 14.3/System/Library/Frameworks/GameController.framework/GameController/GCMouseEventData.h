@interface GCMouseEventData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int type;
@property unsigned short source;
@property float deltaX;
@property float deltaY;
@property unsigned long long buttonMask;
@property unsigned long long senderID;

- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
