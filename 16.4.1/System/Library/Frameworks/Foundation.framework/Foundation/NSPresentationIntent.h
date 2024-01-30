@class NSArray, NSString;

@interface NSPresentationIntent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long intentKind;
@property (readonly) NSPresentationIntent *parentIntent;
@property (readonly) long long identity;
@property (readonly) long long ordinal;
@property (readonly) NSArray *columnAlignments;
@property (readonly) long long columnCount;
@property (readonly) long long headerLevel;
@property (readonly, copy) NSString *languageHint;
@property (readonly) long long column;
@property (readonly) long long row;
@property (readonly) long long indentationLevel;

+ (id)blockQuoteIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;
+ (id)codeBlockIntentWithIdentity:(long long)a0 languageHint:(id)a1 nestedInsideIntent:(id)a2;
+ (id)headerIntentWithIdentity:(long long)a0 level:(long long)a1 nestedInsideIntent:(id)a2;
+ (id)listItemIntentWithIdentity:(long long)a0 ordinal:(long long)a1 nestedInsideIntent:(id)a2;
+ (id)orderedListIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;
+ (id)paragraphIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;
+ (id)tableCellIntentWithIdentity:(long long)a0 column:(long long)a1 nestedInsideIntent:(id)a2;
+ (id)tableHeaderRowIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;
+ (id)tableIntentWithIdentity:(long long)a0 columnCount:(long long)a1 alignments:(id)a2 nestedInsideIntent:(id)a3;
+ (id)tableRowIntentWithIdentity:(long long)a0 row:(long long)a1 nestedInsideIntent:(id)a2;
+ (id)thematicBreakIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;
+ (id)unorderedListIntentWithIdentity:(long long)a0 nestedInsideIntent:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEquivalentToPresentationIntent:(id)a0;

@end
