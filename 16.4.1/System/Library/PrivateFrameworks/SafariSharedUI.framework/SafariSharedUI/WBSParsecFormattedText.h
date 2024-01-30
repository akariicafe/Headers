@class NSString, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecFormattedText : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isEmphasized) BOOL emphasized;
@property (readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation;
@property (readonly, nonatomic) NSNumber *spaceBeforeInPoints;
@property (readonly, nonatomic) NSNumber *spaceAfterInPoints;

+ (id)schema;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)glyphWithSession:(id)a0;

@end
