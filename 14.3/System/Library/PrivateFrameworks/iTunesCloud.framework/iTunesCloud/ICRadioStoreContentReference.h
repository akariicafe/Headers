@class NSNumber, NSString;

@interface ICRadioStoreContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *storeIdentifier;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreIdentifier:(id)a0;
- (id)rawContentDictionary;
- (id)matchDictionary;
- (void)encodeWithCoder:(id)a0;

@end
