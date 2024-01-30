@class NSString, NSData, VOSubstitution;

@interface VOBundle : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) VOSubstitution *iOSSubstitution;
@property (retain, nonatomic) VOSubstitution *macOSSubstitution;

+ (id)fetchRequest;

@end
