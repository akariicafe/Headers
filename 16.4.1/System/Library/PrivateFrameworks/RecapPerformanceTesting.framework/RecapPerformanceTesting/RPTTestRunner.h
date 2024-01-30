@class RCPInlinePlayer, RPTInteractionOptions, RPTSettings;

@interface RPTTestRunner : NSObject

@property (retain, nonatomic) RPTSettings *settings;
@property (readonly, retain, nonatomic) RCPInlinePlayer *inlinePlayer;
@property (retain, nonatomic) RPTInteractionOptions *interactionOptions;

+ (void)runTestWithParameters:(id)a0;
+ (BOOL)isRecapAvailable;
+ (void)runTestWithParameters:(id)a0 resultHandler:(id /* block */)a1;
+ (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;

- (id)initWithInteractionOptions:(id)a0;
- (void)runTestWithParameters:(id)a0;
- (void)runTestWithParameters:(id)a0 resultHandler:(id /* block */)a1;
- (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_manageTestStartAndEndForParameters:(id)a0;
- (void).cxx_destruct;

@end
