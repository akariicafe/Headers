@class NSString, NSArray, NSURL;

@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *moreDescription;
@property (nonatomic) double percentageX;
@property (nonatomic) double percentageY;
@property (copy, nonatomic) NSURL *image;

- (id)initWithTitle:(id)a0 description:(id)a1 percentageX:(double)a2 percentageY:(double)a3 image:(id)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
