@class NSString, NSAttributedString;

@interface _UIDebugLogMessage : NSObject {
    NSString *_string;
    NSAttributedString *_attributedString;
}

+ (id)messageWithPrefix:(id)a0 color:(id)a1 string:(id)a2;
+ (id)messageWithFormat:(id)a0;
+ (id)messageWithNewline;
+ (id)messageWithString:(id)a0;
+ (id)messageWithStyle:(unsigned long long)a0 string:(id)a1;

- (BOOL)_isTransparent;
- (id)description;
- (void).cxx_destruct;
- (id)_stringRepresentation;
- (id)_attributedStringRepresentation;
- (BOOL)_isNode;
- (id)attributedDescription;
- (id)initWithString:(id)a0 attributedString:(id)a1;

@end
