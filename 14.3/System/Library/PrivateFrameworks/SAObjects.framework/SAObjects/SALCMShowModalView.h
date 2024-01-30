@class SAAceView;

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *view;

+ (id)showModalView;
+ (id)showModalViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
