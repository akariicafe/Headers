@class NSString;

@interface WKContentRuleList : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleList> { struct type { unsigned char __lx[56]; } data; } _contentRuleList;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsRegularExpression:(id)a0;

- (void)dealloc;

@end
