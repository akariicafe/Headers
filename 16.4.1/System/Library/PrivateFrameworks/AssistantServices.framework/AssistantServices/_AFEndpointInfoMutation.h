@class NSString, AFEndpointInfo;

@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating> {
    AFEndpointInfo *_base;
    NSString *_identifier;
    NSString *_mediaRouteIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getIdentifier;
- (void)setIdentifier:(id)a0;
- (id)getMediaRouteIdentifier;
- (void).cxx_destruct;

@end
