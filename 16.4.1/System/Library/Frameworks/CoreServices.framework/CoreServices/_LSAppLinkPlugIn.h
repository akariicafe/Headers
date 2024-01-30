@class NSURLComponents, _LSAppLinkOpenState;

@interface _LSAppLinkPlugIn : NSObject

@property (retain) NSURLComponents *URLComponents;
@property unsigned long long limit;
@property (retain) _LSAppLinkOpenState *state;

+ (BOOL)canHandleURLComponents:(id)a0;
+ (id)plugInClasses;

- (void).cxx_destruct;
- (id)appLinksWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;

@end
