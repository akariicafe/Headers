@class NSString;

@interface WLKComingSoonInfo : NSObject

@property (readonly, nonatomic, getter=isComingSoon) BOOL comingSoon;
@property (readonly, copy, nonatomic) NSString *dateString;
@property (readonly, copy, nonatomic) NSString *dateFormat;
@property (readonly, nonatomic) unsigned long long precision;
@property (readonly, copy, nonatomic) NSString *brandID;

+ (id)comingSoonItemsWithDictionaries:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_initializeDatesStrings;
- (id)initWithDictionary:(id)a0 brandID:(id)a1;

@end
