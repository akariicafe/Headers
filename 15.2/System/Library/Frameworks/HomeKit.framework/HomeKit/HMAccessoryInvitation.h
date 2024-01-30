@class NSUUID, HMAccessory, NSString;

@interface HMAccessoryInvitation : NSObject <NSSecureCoding, HMObjectMerge>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) HMAccessory *accessory;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithAccessory:(id)a0 identifier:(id)a1 state:(long long)a2;

@end
