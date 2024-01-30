@class NSData;

@interface Face : NSManagedObject

@property (retain, nonatomic) NSData *facePrintBlob;

+ (id)fetchRequest;

@end
