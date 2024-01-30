@class NSString, NSNumber, NSDate;

@interface PRManagedLikenessChange : NSManagedObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *changedVersion;
@property (retain, nonatomic) NSString *changedID;
@property (retain, nonatomic) NSString *changedProperties;
@property (retain, nonatomic) NSDate *timestamp;

@end
