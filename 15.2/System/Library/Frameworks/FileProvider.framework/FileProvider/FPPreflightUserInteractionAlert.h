@class FPStringFormat;

@interface FPPreflightUserInteractionAlert : NSObject

@property (retain, nonatomic) FPStringFormat *titleFormat;
@property (retain, nonatomic) FPStringFormat *subtitleFormat;
@property (retain, nonatomic) FPStringFormat *continueCaptionFormat;
@property (retain, nonatomic) FPStringFormat *cancelCaptionFormat;
@property (nonatomic) BOOL enableContinue;
@property (nonatomic) BOOL continueIsDestructive;

+ (id)alertFromDictionary:(id)a0 localizationLookup:(id)a1;

- (void).cxx_destruct;

@end
