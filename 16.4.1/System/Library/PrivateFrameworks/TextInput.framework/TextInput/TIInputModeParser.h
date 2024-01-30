@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {
    NSMutableDictionary *_inputModeDicts;
    NSCharacterSet *_invalidCharacterSet;
}

+ (id)sharedInstance;

- (id)stringByReplacingInvalidCharactersWithUnderscores:(id)a0;
- (id)parseInputMode:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
