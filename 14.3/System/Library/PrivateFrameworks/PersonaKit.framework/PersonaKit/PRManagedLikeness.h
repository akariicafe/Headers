@class NSString, NSNumber, NSDate;

@interface PRManagedLikeness : NSManagedObject

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSString *recipe;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *staticRepresentationFileID;
@property (retain, nonatomic) NSNumber *cropRectX;
@property (retain, nonatomic) NSNumber *cropRectY;
@property (retain, nonatomic) NSNumber *cropRectWidth;
@property (retain, nonatomic) NSNumber *cropRectHeight;
@property (retain, nonatomic) NSDate *expiration;
@property (retain, nonatomic) NSDate *softExpiration;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSNumber *source;

@end
