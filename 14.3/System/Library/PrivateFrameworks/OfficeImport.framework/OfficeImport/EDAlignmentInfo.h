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

- (id)init;
- (void)setIndent:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)verticalAlignment;
- (int)indent;
- (BOOL)isEqual:(id)a0;
- (void)setHorizontalAlignment:(int)a0;
- (int)horizontalAlignment;
- (void)setVerticalAlignment:(int)a0;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isHorizontalAlignOverridden;
- (BOOL)isTextWrapped;
- (int)textRotation;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isIndentOverridden;
- (void)setTextWrapped:(BOOL)a0;
- (void)setTextRotation:(int)a0;
- (BOOL)isEqualToAlignmentInfo:(id)a0;
- (void)setDoNotModify:(BOOL)a0;

@end
