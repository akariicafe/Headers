@class NSString;

@interface MNFNoteProperty : NSManagedObject

@property (retain, nonatomic) NSString *propertyKey;
@property (retain, nonatomic) id propertyValue;

@end
