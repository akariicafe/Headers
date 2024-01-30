@class NSURL, NSString;

@interface SXJSONLinkAction : SXJSONAction <SXLinkAction>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
