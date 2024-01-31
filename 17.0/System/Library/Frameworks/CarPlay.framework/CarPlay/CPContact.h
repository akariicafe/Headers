@class NSString, CPTemplate, UIImage, NSArray, CPContactEntity;

@interface CPContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPContactEntity *contactEntity;
@property (weak, nonatomic) CPTemplate *associatedTemplate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *informativeText;

- (id)image;
- (void)setActions:(id)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)actions;
- (id)subtitle;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)informativeText;
- (void)setInformativeText:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_associateControlsToTemplate:(id)a0;
- (id)initWithName:(id)a0 image:(id)a1;

@end
