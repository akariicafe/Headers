@class NSDictionary, NSString;

@interface CACSpokenCommandCustom : CACSpokenCommand

@property (readonly) NSDictionary *customProperties;
@property (retain) NSString *primaryCommand;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCommandIdentifier:(id)a0;
- (BOOL)isCustomCommand;
- (void)handleSpokenCommand:(id)a0;

@end
