@interface MUISnippetGenerator : NSObject

+ (id)highlightedSnippetUsingTokens:(id)a0 attributedString:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 highlighting:(id /* block */)a3 error:(id *)a4;
+ (id)highlightedSnippetUsingTokens:(id)a0 attributedString:(id)a1 maxNumberOfWordsBeforeOrAfterToken:(long long)a2 maxNumberOfRanges:(long long)a3 highlighting:(id /* block */)a4 error:(id *)a5;
+ (id)highlightingAuthorTokens:(id)a0 authorEmailTokens:(id)a1 inEmailAttributedString:(id)a2 highlighting:(id /* block */)a3 error:(id *)a4;
+ (id)highlightingTokens:(id)a0 attributedString:(id)a1 highlighting:(id /* block */)a2 error:(id *)a3;

@end
