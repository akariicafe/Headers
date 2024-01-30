@interface CKMentionsUtilities : NSObject

+ (id)attributedStringByHighlightingMentionsInAttributedString:(id)a0 withFont:(id)a1 textColor:(id)a2 mentionFont:(id)a3 mentionColor:(id)a4;
+ (BOOL)metionedHandleMatchesMeCard:(id)a0;
+ (BOOL)supportsSupplementalLexiconMentions;

@end
