@class NSString, NSDictionary, NSDate;

@interface PLQuestion : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *entityIdentifier;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) unsigned short displayType;
@property (nonatomic) double score;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short questionVersion;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;

- (void)delete;

@end
