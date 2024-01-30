@class CAMediaTimingFunction, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary, NSDate;

@interface TSDCanvasAnimation : NSObject <CAAnimationDelegate> {
    TSUNoCopyDictionary *_animationDictionariesForLayers;
    unsigned int _outstandingAnimationCount;
    BOOL _firstAnimationDidStart;
    BOOL _allAnimationsFinishedBeforeStopping;
}

@property (readonly, retain, nonatomic) NSString *animationID;
@property (readonly, nonatomic) void *context;
@property (nonatomic) id delegate;
@property (nonatomic) SEL willStartSelector;
@property (nonatomic) SEL didStopSelector;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float repeatCount;
@property (nonatomic) BOOL repeatAutoreverses;
@property (nonatomic) BOOL useRepFiltering;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) NSString *beginTimeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)initWithAnimationID:(id)a0 interactiveCanvasController:(id)a1 context:(void *)a2;
- (void)setAnimation:(id)a0 forLayer:(id)a1 forKey:(id)a2;

@end
