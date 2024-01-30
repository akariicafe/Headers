@class NSString;

@interface AXMSpeechOutputAction : AXMOutputAction {
    NSString *_text;
}

@property (readonly, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithText:(id)a0;

@end
