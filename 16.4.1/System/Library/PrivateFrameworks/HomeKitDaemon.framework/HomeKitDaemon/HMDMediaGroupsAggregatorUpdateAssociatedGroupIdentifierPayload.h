@class NSString, NSUUID;

@interface HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload : HMFObject <HMMessageEncoding>

@property (class, readonly, copy) NSString *messageName;

@property (readonly, copy) NSUUID *groupIdentifier;
@property (readonly, copy) NSUUID *associatedGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)payloadCopy;
- (id)initWithGroupIdentifier:(id)a0 associatedGroupIdentifier:(id)a1;

@end
