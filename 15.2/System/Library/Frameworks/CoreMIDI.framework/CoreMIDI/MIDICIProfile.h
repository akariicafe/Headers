@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *profileID;

+ (id)description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (const void *)bytes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithData:(id)a0 name:(id)a1;

@end
