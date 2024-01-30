@class NSString, NSNumber;

@interface PRManagedPropagationEvent : NSManagedObject

@property (retain, nonatomic) NSString *recipientID;
@property (retain, nonatomic) NSNumber *sentVersion;

@end
