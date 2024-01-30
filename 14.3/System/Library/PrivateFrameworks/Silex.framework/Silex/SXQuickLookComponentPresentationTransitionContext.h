@class NSString, SXQuickLookFile;

@interface SXQuickLookComponentPresentationTransitionContext : NSObject <NFStateMachineContextType>

@property (readonly, nonatomic) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFile:(id)a0;

@end
