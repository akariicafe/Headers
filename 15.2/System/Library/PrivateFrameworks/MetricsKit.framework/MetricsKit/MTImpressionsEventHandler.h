@protocol MTImpressionsEventHandlerDelegate;

@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (weak, nonatomic) id<MTImpressionsEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)eventType;
- (id)eventVersion:(id)a0;
- (id)xpViewableThreshold:(id)a0;

@end
