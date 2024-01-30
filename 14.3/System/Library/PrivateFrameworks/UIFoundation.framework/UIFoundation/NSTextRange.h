@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

- (BOOL)isEqualToTextRange:(id)a0;
- (BOOL)containsRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)terminator;
- (void)dealloc;
- (id)shortDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (BOOL)containsLocation:(id)a0;

@end
