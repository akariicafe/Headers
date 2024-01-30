@class NSString, NSSet;

@interface _CDKeywordRecord : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSSet *interactions;

@end
