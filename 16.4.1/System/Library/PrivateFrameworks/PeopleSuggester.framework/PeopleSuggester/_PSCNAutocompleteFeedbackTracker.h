@class _PSCNAutocompleteFeedbackSessionAccumulator, _PSCNAutocompleteFeedbackInteractionIterator, NSDateFormatter, _CDInteraction, NSDate;

@interface _PSCNAutocompleteFeedbackTracker : NSObject {
    _PSCNAutocompleteFeedbackInteractionIterator *_interactionIterator;
    long long _maxSecondsBetweenImpressionAndAction;
    BOOL _shouldInferEnterAndExit;
    id /* block */ _impressionLogger;
    id /* block */ _submodelImpressionLogger;
    id /* block */ _actionLogger;
    BOOL _defaultForIsImplicit;
    NSDateFormatter *_dateFormatter;
    _CDInteraction *_followingInteractionPrevious;
    _CDInteraction *_followingInteraction;
    _PSCNAutocompleteFeedbackSessionAccumulator *_accumulator;
    BOOL _inActionWindow;
}

@property (readonly, nonatomic) NSDate *stopTime;

+ (id)defaultActionWithInteraction:(id)a0 trialID:(id)a1 isImplicit:(BOOL)a2;
+ (id)defaultImpressionWithFeedback:(id)a0 bundleID:(id)a1 trialID:(id)a2 isImplicit:(BOOL)a3;
+ (id)defaultSubmodelImpressionWithFeedback:(id)a0 submodel:(id)a1 bundleID:(id)a2 trialID:(id)a3 isImplicit:(BOOL)a4;

- (void)finish;
- (void)processFeedback:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)annotateAction:(id)a0 withStatistics:(id)a1;
- (void)annotateImpression:(id)a0 withStatistics:(id)a1;
- (void)finishWithInferredEnterAndExit;
- (void)finishWithoutInferredEnterAndExit;
- (id)initWithInteractionIterator:(id)a0 maxSecondsBetweenImpressionAndAction:(long long)a1 shouldInferEnterAndExit:(BOOL)a2 impressionLogger:(id /* block */)a3 submodelImpressionLogger:(id /* block */)a4 actionLogger:(id /* block */)a5 defaultForIsImplicit:(BOOL)a6;
- (void)logActionFromAccumulator:(id)a0;
- (void)logImpressionsFromAccumulator:(id)a0;
- (void)processFeedbackWithInferredEnterAndExit:(id)a0;
- (void)processFeedbackWithoutInferredEnterAndExit:(id)a0;

@end
