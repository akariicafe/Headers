@class NSString, NSNumber, NSData;

@interface TTYHistory : NSManagedObject

@property (retain, nonatomic) NSString *callUID;
@property (retain, nonatomic) NSNumber *needsCloudKitUpload;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *version;

@end
