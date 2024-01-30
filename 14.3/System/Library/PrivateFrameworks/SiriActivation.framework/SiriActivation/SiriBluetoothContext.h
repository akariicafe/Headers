@class NSString, NSNumber;

@interface SiriBluetoothContext : SiriContext {
    NSNumber *_isTemporaryDevice;
    NSNumber *_isEyesFree;
}

@property (readonly, nonatomic) NSString *address;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEyesFree;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)initWithBluetoothDevice:(id)a0;

@end
