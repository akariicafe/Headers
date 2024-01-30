@class RCPInlinePlayer, RPTInteractionOptions, RPTSettings;

@interface RPTTestRunner : NSObject

@property (retain, nonatomic) RPTSettings *settings;
@property (readonly, retain, nonatomic) RCPInlinePlayer *inlinePlayer;
@property (retain, nonatomic) RPTInteractionOptions *interactionOptions;

+ (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isRecapAvailable;
+ (void)runTestWithParameters:(id)a0;

- (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_manageTestStartAndEndForParameters:(id)a0;
- (void)runTestWithParameters:(id)a0;
- (id)initWithInteractionOptions:(id)a0;

@end
