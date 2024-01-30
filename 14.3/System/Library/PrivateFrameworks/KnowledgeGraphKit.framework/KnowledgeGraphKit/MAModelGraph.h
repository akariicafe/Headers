@class NSString, NSData;

@interface MAModelGraph : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) short version;
@property (retain, nonatomic) NSData *labelStrings;

@end
