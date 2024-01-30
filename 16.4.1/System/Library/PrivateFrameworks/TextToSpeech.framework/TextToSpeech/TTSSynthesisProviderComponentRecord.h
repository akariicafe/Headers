@class NSString, NSArray;

@interface TTSSynthesisProviderComponentRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } componentDescription;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *containerBundleIdentifier;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isFirstParty;
@property (retain, nonatomic) NSArray *voices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
