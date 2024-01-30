@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation {
    NSArray *_characterBoxes;
    NSString *_text;
}

@property (copy, nonatomic) NSArray *characterBoxes;
@property (readonly, copy, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setText:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
