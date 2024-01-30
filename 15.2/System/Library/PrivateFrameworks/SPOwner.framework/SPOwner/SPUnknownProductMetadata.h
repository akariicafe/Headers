@class NSString, NSArray, NSURL;

@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *moreDescription;
@property (nonatomic) double percentageX;
@property (nonatomic) double percentageY;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSURL *image2x;
@property (copy, nonatomic) NSURL *image3x;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithTitle:(id)a0 description:(id)a1 percentageX:(double)a2 percentageY:(double)a3 image:(id)a4 image2x:(id)a5 image3x:(id)a6;

@end
