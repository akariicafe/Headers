@class LPLinkMetadata, NSString, NSArray, NSItemProvider, NSURL, NSPersonNameComponents;
@protocol SWShareableContentRepresentationProvider;

@interface SWShareableContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceSceneIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *registeredTypeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *registeredOpenInPlaceTypeIdentifiers;
@property (retain, nonatomic) id<SWShareableContentRepresentationProvider> representationProvider;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) BOOL hasPossibleCollaborationRepresentation;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSURL *highlightURL;
@property (readonly, copy, nonatomic) NSString *initiatorHandle;
@property (readonly, nonatomic) NSPersonNameComponents *initiatorNameComponents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)sourceIdentifier;
- (void).cxx_destruct;
- (BOOL)canLoadObjectOfClass:(Class)a0;
- (void)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadInPlaceFileRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasRepresentationConformingToTypeIdentifier:(id)a0;
- (id)initWithSourceSceneIdentifier:(id)a0 sourceBundleIdentifier:(id)a1 metadata:(id)a2 registeredTypeIdentifiers:(id)a3 registeredOpenInPlaceTypeIdentifiers:(id)a4 highlightURL:(id)a5 initiatorHandle:(id)a6 initiatorNameComponents:(id)a7;
- (id)sourceApplicationIdentifier;

@end
