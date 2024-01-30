@class NSString, UIImage;

@interface PSUIAppDescription : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) UIImage *icon;

- (void).cxx_destruct;
- (id)description;

@end
