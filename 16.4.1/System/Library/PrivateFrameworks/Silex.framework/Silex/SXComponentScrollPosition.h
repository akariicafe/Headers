@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition

@property (readonly, copy, nonatomic) NSString *componentIdentifier;
@property (readonly, nonatomic) double relativePageOffset;
@property (readonly, nonatomic) double canvasWidth;

+ (BOOL)supportsSecureCoding;
+ (BOOL)jsonDictionaryRepresentationIsValid:(id)a0 exactly:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithComponentIdentifier:(id)a0 canvasWidth:(double)a1 relativePageOffset:(double)a2;
- (id)initWithDictionaryRepresentation:(id)a0 exactly:(BOOL)a1;

@end
