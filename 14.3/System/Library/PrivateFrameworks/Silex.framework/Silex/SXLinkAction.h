@class NSURL, NSString;

@interface SXLinkAction : NSObject <SXLinkAction>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
