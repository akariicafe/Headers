@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {
    NSMutableDictionary *_inputModeDicts;
    NSCharacterSet *_invalidCharacterSet;
}

+ (id)sharedInstance;

- (id)stringByReplacingInvalidCharactersWithUnderscores:(id)a0;
- (void).cxx_destruct;
- (id)parseInputMode:(id)a0;
- (id)init;

@end
