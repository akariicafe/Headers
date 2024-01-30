@class NSString, NSArray;

@interface CSSceneClassification : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSArray *synonyms;
@property double confidence;
@property unsigned int sceneIdentifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2 sceneIdentifier:(unsigned int)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
