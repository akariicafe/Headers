@class NSUUID, NSString;

@interface COHomeKitSettingsRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *keyPath;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 keyPath:(id)a1;

@end
