@class NSURL, NSString, SXJSONDictionary;

@interface SXJSONLinkAction : SXJSONAction <SXLinkAction>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
