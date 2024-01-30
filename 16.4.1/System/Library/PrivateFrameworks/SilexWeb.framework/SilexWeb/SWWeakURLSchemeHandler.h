@class NSString;
@protocol WKURLSchemeHandler;

@interface SWWeakURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (readonly, weak, nonatomic) id<WKURLSchemeHandler> URLSchemeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
