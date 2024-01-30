@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    double _offsetInLine;
}

+ (id)restorableScrollPositionForTextView:(id)a0;
+ (id)restorableScrollPositionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)restorableScrollPositionWithDictionary:(id)a0;
+ (id)restorableScrollPositionForStateRestoration:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (double)offsetWithinLine;
- (id)initWithCoder:(id)a0;
- (id)initWithTextView:(id)a0;
- (id)dictionaryRepresentation;
- (id)debugDescription;
- (id)initWithTextViewForStateRestoration:(id)a0;

@end
