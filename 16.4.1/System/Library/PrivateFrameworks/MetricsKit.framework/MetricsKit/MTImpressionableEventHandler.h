@protocol MTImpressionableEventHandlerDelegate;

@interface MTImpressionableEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id<MTImpressionableEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)impressions:(id)a0;
- (id)xpViewablePercentage:(id)a0;

@end
