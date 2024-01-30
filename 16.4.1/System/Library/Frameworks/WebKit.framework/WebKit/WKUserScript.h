@class NSString, _WKUserContentWorld, WKContentWorld;

@interface WKUserScript : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::UserScript> { struct type { unsigned char __lx[120]; } data; } _userScript;
}

@property (readonly, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, nonatomic) WKContentWorld *_contentWorld;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, nonatomic) long long injectionTime;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2 includeMatchPatternStrings:(id)a3 excludeMatchPatternStrings:(id)a4 associatedURL:(id)a5 contentWorld:(id)a6 deferRunningUntilNotification:(BOOL)a7;
- (id)initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2;
- (id)initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2 inContentWorld:(id)a3;

@end
