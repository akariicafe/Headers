@class NSBundle;
@protocol BRLTTranslatorProtocol;

@interface BRLTSTranslator : NSObject

@property (readonly, nonatomic) id<BRLTTranslatorProtocol> translator;
@property (readonly, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)brailleForText:(id)a0 parameters:(id)a1 locations:(out id *)a2;
- (id)textForBraille:(id)a0 parameters:(id)a1 locations:(out id *)a2;

@end
