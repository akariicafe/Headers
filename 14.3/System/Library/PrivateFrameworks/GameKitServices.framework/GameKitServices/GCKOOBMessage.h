@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)band;
- (id)init;
- (id)data;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (unsigned int)type;
- (void)encodeWithCoder:(id)a0;

@end
