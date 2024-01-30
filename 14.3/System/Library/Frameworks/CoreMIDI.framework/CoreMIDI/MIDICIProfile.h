@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *profileID;

+ (id)description;

- (const void *)bytes;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 name:(id)a1;

@end
