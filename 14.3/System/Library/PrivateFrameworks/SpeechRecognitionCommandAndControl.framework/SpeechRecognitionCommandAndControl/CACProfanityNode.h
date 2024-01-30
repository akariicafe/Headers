@class NSMutableDictionary;

@interface CACProfanityNode : NSObject {
    NSMutableDictionary *_childMap;
    NSMutableDictionary *_terminalMap;
    NSMutableDictionary *_originalWordMap;
}

- (id)init;
- (id)childForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)createChildForKey:(id)a0;
- (void)setTerminal:(id)a0 originalWord:(id)a1 forKey:(id)a2;
- (id)terminalForKey:(id)a0;
- (id)originalWordForKey:(id)a0;

@end
