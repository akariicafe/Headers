@class NSString, NSArray;

@interface LTUISourceMeta : NSObject

@property (nonatomic) unsigned long long origin;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSArray *languageHints;

- (void).cxx_destruct;
- (id)init;
- (id)dictionaryRepresentation;

@end
