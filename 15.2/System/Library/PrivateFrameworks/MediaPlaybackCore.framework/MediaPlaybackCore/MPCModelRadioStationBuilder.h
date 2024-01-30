@class MPPropertySet;

@interface MPCModelRadioStationBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char beats1 : 1; unsigned char name : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned int explicit; unsigned char artwork : 1; unsigned char allowsItemLiking : 1; unsigned char attributionLabel : 1; unsigned char type : 1; unsigned char subtype : 1; unsigned char subscriptionRequired : 1; unsigned char providerUniversalLink : 1; unsigned char providerBundleIdentifier : 1; } _requestedRadioStationProperties;
}

@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedProperties:(id)a0;
- (id)modelRadioStationForMetadata:(id)a0 userIdentity:(id)a1;

@end
