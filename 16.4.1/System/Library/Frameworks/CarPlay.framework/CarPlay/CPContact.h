@class NSString, NSArray, UIImage, CPContactEntity;

@interface CPContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPContactEntity *contactEntity;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *informativeText;

- (void)encodeWithCoder:(id)a0;
- (id)actions;
- (id)initWithCoder:(id)a0;
- (id)subtitle;
- (void)setInformativeText:(id)a0;
- (void)setImage:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)image;
- (void)setActions:(id)a0;
- (void)setName:(id)a0;
- (id)informativeText;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:(id)a0 image:(id)a1;

@end
