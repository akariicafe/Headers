@class NSString, NSDictionary, NSMutableDictionary, MPSectionedCollection, ICUserIdentity;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
}

@property (readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (retain, nonatomic) MPSectionedCollection *representedObjects;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1;
+ (id)libraryViewWithUserIdentity:(id)a0;
+ (BOOL)requiresNetwork;
+ (id)preferredQueue;

- (void)setProperties:(id)a0 forItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)propertiesForItemAtIndexPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUnpersonalizedRequest:(id)a0 unpersonalizedContentDescriptors:(id)a1;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)initWithUnpersonalizedContentDescriptors:(id)a0;

@end
