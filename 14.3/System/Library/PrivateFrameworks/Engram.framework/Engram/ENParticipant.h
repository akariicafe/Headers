@class NSSet, NSArray;
@protocol ENAccountPublicKey;

@interface ENParticipant : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<ENAccountPublicKey> accountPublicKey;
@property (retain, nonatomic) NSSet *aliases;
@property (retain, nonatomic) NSArray *devices;
@property (readonly, nonatomic) BOOL supportsEngram;

- (void).cxx_destruct;
- (id)initWithAccountPublicKey:(id)a0 aliases:(id)a1 devices:(id)a2;
- (id)deviceWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
