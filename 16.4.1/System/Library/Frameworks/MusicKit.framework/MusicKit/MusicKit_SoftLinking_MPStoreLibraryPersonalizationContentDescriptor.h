@class MPStoreLibraryPersonalizationContentDescriptor, NSString;

@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationContentDescriptor : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPStoreLibraryPersonalizationContentDescriptor *_underlyingContentDescriptor;
}

@property (readonly, nonatomic) MPStoreLibraryPersonalizationContentDescriptor *_underlyingContentDescriptor;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;

@end
