@class NSString, NSDictionary, MPMediaLibrary, NSMutableDictionary, MPSectionedCollection, ICUserIdentity;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
}

@property (readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (retain, nonatomic) MPMediaLibrary *mediaLibraryOverrideForTestingOnly;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (retain, nonatomic) MPSectionedCollection *representedObjects;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)libraryViewWithUserIdentity:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
+ (id)preferredQueue;
+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1;
+ (id)libraryViewWithMediaLibraryOverrideForTestingOnly:(id)a0;

- (id)initWithUnpersonalizedRequest:(id)a0 unpersonalizedContentDescriptors:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setProperties:(id)a0 forItemAtIndexPath:(id)a1;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)propertiesForItemAtIndexPath:(id)a0;
- (id)initWithUnpersonalizedContentDescriptors:(id)a0;
- (void).cxx_destruct;

@end
