@class NSURL, NSString;
@protocol SWNavigationManager;

@interface SWURLInteraction : NSObject <SWInteraction>

@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)perform;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 navigationManager:(id)a1;

@end
