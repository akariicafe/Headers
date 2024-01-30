@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    MPSectionedCollection *_radioStationTracks;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadioStationTracks:(id)a0;

@end
