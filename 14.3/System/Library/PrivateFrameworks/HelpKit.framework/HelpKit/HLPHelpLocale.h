@class NSString, NSArray;

@interface HLPHelpLocale : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *isoCodes;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
