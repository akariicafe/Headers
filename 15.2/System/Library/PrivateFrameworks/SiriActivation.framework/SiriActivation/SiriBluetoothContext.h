@class NSString, NSNumber;

@interface SiriBluetoothContext : SiriContext {
    NSNumber *_isTemporaryDevice;
    NSNumber *_isEyesFree;
}

@property (readonly, nonatomic) NSString *address;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEyesFree;
- (id)initWithBluetoothDevice:(id)a0;

@end
