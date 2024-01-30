@class NSString, _NSAttributedStringGrammar;

@interface _NSAttributedStringGrammarInflectionMatchingWord : NSObject <NSCopying, _NSAttributedStringGrammarInflecting>

@property (readonly) NSString *wordToken;
@property (readonly) _NSAttributedStringGrammar *matchingGrammar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWordToken:(id)a0 matchingGrammar:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
