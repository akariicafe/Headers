@class NSString, NSUUID, NSNumber;

@interface RTMapItemExtendedAttributesMO : NSManagedObject

@property (copy, nonatomic) NSString *addressIdentifier;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *isMe;
@property (copy, nonatomic) NSNumber *wifiConfidence;
@property (copy, nonatomic) NSNumber *wifiFingerprintLabelType;

+ (id)managedObjectWithExtendedAttributes:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithExtendedAttributes:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)fetchRequest;

@end
