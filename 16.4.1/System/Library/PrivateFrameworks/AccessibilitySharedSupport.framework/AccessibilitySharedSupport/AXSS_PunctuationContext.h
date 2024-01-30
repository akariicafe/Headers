@class NSString, AXSS_PunctuationGroup;

@interface AXSS_PunctuationContext : NSManagedObject

@property (copy, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) AXSS_PunctuationGroup *group;

+ (id)fetchRequest;

@end
