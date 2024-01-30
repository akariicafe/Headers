@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    BOOL mTextWrapped;
    BOOL mHorizontalAlignOverridden;
    BOOL mVerticalAlignOverridden;
    BOOL mIndentOverridden;
    BOOL mTextWrappedOveridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alignmentInfo;

- (void)setVerticalAlignment:(int)a0;
- (int)horizontalAlignment;
- (void)setHorizontalAlignment:(int)a0;
- (int)verticalAlignment;
- (int)indent;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIndent:(int)a0;
- (int)textRotation;
- (void)setTextWrapped:(BOOL)a0;
- (void)setTextRotation:(int)a0;
- (BOOL)isHorizontalAlignOverridden;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isTextWrapped;
- (BOOL)isIndentOverridden;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isEqualToAlignmentInfo:(id)a0;
- (void)setDoNotModify:(BOOL)a0;

@end
