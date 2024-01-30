@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CNContactImageManagedObject : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *variant;
@property (retain, nonatomic) NSData *poseConfigurationData;

+ (id /* block */)managedObjectToContactImageTransform;

- (id)cropRectStringFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithContactImage:(id)a0 contactIdentifier:(id)a1;
- (void)updateWithContactImage:(id)a0;

@end
