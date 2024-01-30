@class NSArray, PRSWidget;

@interface PRPosterMutableComplicationLayout : PRPosterComplicationLayout

@property (copy, nonatomic) PRSWidget *inlineComplication;
@property (copy, nonatomic) NSArray *complications;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
