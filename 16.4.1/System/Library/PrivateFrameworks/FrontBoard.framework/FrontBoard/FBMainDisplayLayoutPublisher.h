@class NSString, FBSDisplayLayout, FBSDisplayLayoutPublisher;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving, FBSDisplayLayoutPublishing> {
    FBSDisplayLayoutPublisher *_publisher;
    int _displayBacklightToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

+ (id)sharedInstance;

- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)addObserver:(id)a0;
- (id)addElement:(id)a0;
- (id)transitionAssertionWithReason:(id)a0;
- (void)flush;
- (id)_initWithPublisher:(id)a0;
- (id)_addElement:(id)a0 forKey:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
